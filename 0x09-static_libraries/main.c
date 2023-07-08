#include <stdio.h>
#include "main.h"

int main(void)
{
    char str1[100];
    char str2[] = "World!";
    char *result;

    _strcpy(str1, "Hello, ");
    result = _strcat(str1, str2);
    _puts(result);

    return 0;
}
