/*Направете макро функция, която да сортира масив от произволен тип, и да може да сортира низходящо или възходящо в зависимост от аргумент, подаден на макрото. Пример за дефиниция на подобно макро функция SORT(ARRAY, SIZE, TYPE, COMPARE). Пример за използване на подобна макро функция: SORT(array, 5, int, >). Хубаво е да се преизползва SWAP макро функцията от задача 5. Когато дефинирате макрото за да се чете по лесно кодът, можете да слагата “/” за да направите макрото на няколко реда.
*/
 
#include<stdio.h>
#define SWAP(A,B,TYPE) TYPE c = A;\
                        A = B;\
                         B = c;

#define SORT(ARRAY, SIZE, TYPE, COMPARE) \
    for(int i=1;i<SIZE;i++) {\
        int sorted =1;\
        for(int j=0;j<SIZE-i;j++){\
            if(ARRAY[j] COMPARE ARRAY[j+1])\
            {\
                SWAP(ARRAY[j],ARRAY[j+1],TYPE)\
                sorted=0;\
                }\
                }\
        if(sorted)break;\
        }

void main()
{
    int arr[4]={5,6,4,2}, n=4;
    SORT(arr,n,int,>)
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);
}