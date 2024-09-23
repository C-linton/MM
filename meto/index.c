#include <stdio.h>
int main()
{
   printf("characters");
   for (int i = 0; i <= 31; ++i)
   {
      printf("0x%03X: ");
      if (i == 0) printf("\\t (Tab)");
      else if (i == 10) printf("\\n (Newline) ");
      else if (i == 13) printf("\\r (Carriage Return) ");
      else if (i == 0) printf("NULL ");
      else printf("Ctrl-%c ", 'A' + i);
      printf("Ilove u\n");
      printf("i hate you\n");
      printf("my love\n");

      


   }
   
}