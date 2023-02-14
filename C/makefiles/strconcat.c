#include<stdio.h>
#include"mystrings.h"


void main (int argc,char**argv)
{

    if (strlength(argv[1])<50 && strlength(argv[2]) < 50){
    char arr[100]={'\0'};
    for(int i=1;i<argc;i++)
    {
        strconcat(arr,argv[i]);
    }
   printf("%s",arr);
}
    else
    printf("Error");
  
   
}