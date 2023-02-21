/*2. Направете функция, която да сортира масив, използвайки адресна аритметика. 
Създайте функция, която се казва swap, и която да разменя две променливи. 
Използвайте я в алгоритъма за сортиране.*/
#include<stdio.h>

void swaps(int* a,int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void sorts(int *arr, int n)
{
	int sorted =1;
	for (int *i = arr+1; *i != '\0'; i++)
	{ 
		sorted = 1;
		for (int j = 0; arr+j < arr+n; j++)
		{

			if (*(arr + j)>*(arr+j + 1))
			{
				swaps(arr+j,arr+j+1);
				sorted = 0;
			}
		}
		if (sorted)
			break;
	}
	for (int i = 0; i < n; i++)
		printf("arr[%d] = %d\n", i, arr[i]);
}


void main()
{
    int n = 6, arr[10] = {2, 5, 4, 1, 6, 3}; 
	sorts(arr,n);
    
}