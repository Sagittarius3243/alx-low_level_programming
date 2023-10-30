#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>

/**
 * print_elf_header_info - Prints information from the ELF header
 * @header: Pointer to the ELF header
 */
void print_elf_header_info(Elf64_Ehdr *header)
{
    printf("ELF Header:\n");
    printf("  Magic:   ");
    int i;
for (i = 0; i < EI_NIDENT; i++)

        printf("%02x ", header->e_ident[i]);
    printf("\n");

    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown");
    printf("  Entry point address:               %lx\n", header->e_entry);
}

/**
 * main - Entry point of the program
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int ac, char **av)
{
    int fd;
    Elf64_Ehdr header;

    if (ac != 2)
    {
        vprintf(stderr, "Usage: %s elf_filename\n", av[0]);
        return (98);
    }

    fd = open(av[1], O_RDONLY);
    if (fd == -1)
    {
        vprintf(2, "Error: Can't open file %s\n", av[1]);
        return (98);
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header))
    {
        vprintf(stderr, "Error: Can't read from file %s\n", av[1]);
        close(fd);
        return (98);
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3)
    {
        vprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        return (98);
    }

    print_elf_header_info(&header);
    close(fd);
    return (0);
}
