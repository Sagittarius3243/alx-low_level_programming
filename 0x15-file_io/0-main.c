#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
    ssize_t num_letters;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    num_letters = read_textfile(argv[1], 1024);

    if (num_letters == -1)
    {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    if (num_letters == 0)
    {
        fprintf(stderr, "Error: No letters read.\n");
        exit(EXIT_FAILURE);
    }

    printf("Number of letters read and printed: %ld\n", num_letters);

    return 0;
}
