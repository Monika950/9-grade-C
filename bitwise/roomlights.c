#include <stdio.h>
#include <stdlib.h>
void main(void)
{
   unsigned char rooms = 0 << 0; // 0000 0000
   int f=1;
   while (f)
   {
      printf("1.Switch lights\n2.See which are on\n3.Exit\n");
      int num;
      scanf("%d", &num);
      switch (num)
      {
      case 1:
         printf("Switch lights in room: ");
         int roomnum;
         scanf("%d", &roomnum);
         if ((rooms & (1 << (roomnum - 1))) == 1 << (roomnum - 1))
            rooms = rooms^roomnum;
         else
            rooms = rooms | 1 << (roomnum - 1);
         break;
      case 2:
         printf("The light is on in rooms:\n");
         for (int i = 1; i <= 8; i++)
            if ((rooms & (1 << (i - 1))) == 1 << (i - 1))
               printf("%d\n", i);
         break;
      case 3:
         f = 0;
         printf("bye");
         break;
      default:
         f = 0;
         printf("Invalid input");
         break;
      }
   }
}
