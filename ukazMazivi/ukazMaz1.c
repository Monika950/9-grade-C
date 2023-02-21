//1. Направете функция, която да намира дължината на символен низ, използвайки адресна аритметика за обхождане на масива.
#include<stdio.h>

void main(void)
{
    char niz[10]="Ivancho";
    int len=0;
    for(char* i = niz; * i!='\0';i++)
        len++;
    printf("%d\n",len);
}