#include <stdio.h>
#include <string.h>
int main()
{
   char a[100];
   printf("Enter a string :\n");
   gets(a);
   strrev(a);
   printf("Reverse of the string : %s\n", a);
   return 0;
}
