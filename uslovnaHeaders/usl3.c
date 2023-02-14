/*3.Програмата трябва да принтира всеки елемент на масива на нов ред. Ако макрото не е дефинирано или стойността на макрото ARRAY_SIZE е по-голяма от 10 или по-малка от 1, програмата трябва да съдържа една единствена инструкция, която да принтира съобщение на потребителя, че не е въведен размер на масива, който се поддържа от приложението.
Направете функция, която използва различен алгоритъм за сортиране в зависимост от операционната система, на която се намира. Ако операционната система е windows да се използва метод на мехурчето. Ако системата е linux да използва метод на пряката селекция. Ако операционната система е MacOS да се използва метода на прякото вмъкване. Ако операционната система не е нито една от трите, функцията да обръща масива (първият му елемент, да стане последен, втория предпоследен и т.н).*/


#include<stdio.h>
#define ARRAY_SIZE 0
#define APPLE 1


void* bubble(int*,int);
void* straightS( int*,int);
void* insertion(int*,int);
void* reverse(int*,int);

 int main()
 {
    #if (ARRAY_SIZE<10 && ARRAY_SIZE>0)
    int a[ARRAY_SIZE]={9,8,7,4,5}, n = 5;

 #if defined WINDOWS
    printf("under windows");
    bubble(a,n);
 #elif defined LINUX
   printf("under linux\n");
   straightS(a,n);
 #elif defined APPLE
   printf("under macOS\n");
   insertion(a,n);
 #else 
   printf("We are under some other os\n");
   reverse(a,n);
 #endif

  for(int i;i<n;i++)
    printf("%d\n",a[i]);

    #else 
    printf("Ne e vuveden poddurjan razmer na masiva");
    #endif

   return 0;
 }
  
void* bubble(int* a,int n)
{
    int sorted,c;
   for(int i=1; i<n; i++)
    {
        sorted=1;
        for(int j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
                sorted=0;
            }
        }
        if(sorted)break;
    }
}

void* straightS(int*a,int n)
{
    int pos,c;
       for(int j=0;j<n-1;j++)
    {
        pos=j;
       for(int i=j+1;i<n;i++)
       {
           if(a[i]<a[pos])
            pos=i;
       }
       if(pos!=j)
       {
           c=a[j];
           a[j]=a[pos];
           a[pos]=c;
       }
    }
}

void* insertion(int*a,int n)
{
    int j,key;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

void* reverse(int*a,int n)
{
    int c;
    for(int i=0;i<n/2;i++)
    {
        c=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=c;
    }
    for(int i;i<n;i++)
    printf("%d\n",a[i]);
}