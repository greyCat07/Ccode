#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
const char *host_password ="Password"; 
char assigned_password;
int i, count;
printf("ENTER YOUR PASSWORD");
for(i=0;i<8;i++)
{
getchar(assigned_password);
putchar(*);
}
count=strcmp(host_password,assigned_password);
if (count<1)
{
 printf("you can access now");
}
else
{
 printf("access failed !");
}
getch();
}
