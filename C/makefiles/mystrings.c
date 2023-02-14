#include <stdio.h>
#include "mystrings.h"

int strlength(char *str)
{
    int len = 0;
    for (int i = 0; str[i]; i++)
        len = i+1;
    return len;
}

char strconcat(char *str1, char *str2)
{
    int n, m;
    n = strlength(str1);
    m = strlength(str2);
    for (int i = n; i < n + m; i++)
    {
        str1[i] = str2[i - n];
    }
}

int strcompare(char *str1, char *str2)
{
    if (strlength(str1) == strlength(str2))
    {
        for (int i = 0; i < strlength(str1);i++)
        {
            if (str1[i] != str2[i])
            {
                if (str1[i] < str2[i])
                    return -1;
                else
                    return 1;
            }
        }
        return 0;
    }
    if (strlength(str1) < strlength(str2))
        return -1;
    else
        return 1;
}
