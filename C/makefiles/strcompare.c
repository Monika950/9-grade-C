#include <stdio.h>
#include "mystrings.h"

void main(int argc, char **argv)
{
    if (argv[3])
        printf("Error");
    else
    {
        for (int i = 1; i < argc - 1; i++)
            printf("%d", strcompare(argv[i], argv[i + 1]));
    }
}