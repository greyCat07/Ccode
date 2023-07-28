#include <stdio.h>
#include <string.h>
int main()
{
   char string1[20]="Password"; 
   char string2[20]="Password";


   printf("Enter Password\n");
   gets(string2);

   if (strcmp(string1,string2) == 0)
      printf("The strings are equal.\n");
   else if(strcmp(string1,string2) > 0)
      printf("String1 is greater than string2.\n");
   else
      printf("String1 is less than string2.\n");

   return 0;
   
   
}

