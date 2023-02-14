#include<stdio.h>
#include"mystrings.h"

void main(int argc,char** argv){

    if(argv[2] || argc==0)
    {
     printf("error");
    }
     else
     {
    argc= strlength(argv[1]); // -> може и без този ред но трябва да се използва функцията
    printf("%d\n",argc);
     }
}