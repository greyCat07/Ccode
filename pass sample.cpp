#include<stdio.h>
#include<string.h>
int main()
{
   char str[20] = "Password";
   printf("Original string is : %s", str);
   printf("Set to strset() : %s",strset(str,'#'));
   printf("After string set: %s",str);
   return 0;
}

