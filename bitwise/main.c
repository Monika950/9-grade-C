#include<stdio.h>
#include<stdlib.h>
#include"quadraticroots.h"

void main()
{
    struct QuadraticRootsResult result;
    result= findroots(8,2,8);
    if(result.norealroots==1)
    {
        printf("No real roots\n");
    }
    else
    {
        if(result.x1==result.x2)
            printf("x1= x2= %.2Lf\n",result.x2);
        else
            printf("x1= %.2Lf\nx2= %.2Lf\n",result.x1,result.x2);
    }
}