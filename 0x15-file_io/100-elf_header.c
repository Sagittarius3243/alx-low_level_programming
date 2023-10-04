#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * display_elf_header_info - Display information from ELF header.
 * @header: Pointer to ELF header structure.
 */
void display_elf_header_info(Elf64_Ehdr *header)
{
    int i;

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown");
    printf("  Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - Entry point.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
    int fd;
    Elf64_Ehdr header;
    ssize_t num_read;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return (98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        return (98);
    }

    num_read = read(fd, &header, sizeof(Elf64_Ehdr));
    if (num_read != sizeof(Elf64_Ehdr) || header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: Not an ELF file: %s\n", argv[1]);
        close(fd);
        return (98);
    }

    display_elf_header_info(&header);

    close(fd);
    return (0);
}
