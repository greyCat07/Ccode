#include<stdio.h>
 
main()
{
    int a;
	int b;
	int c;
    printf("\n Enter numbers 3 numbers \n\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a>=b)&&(a>=c))
    {
        if(b>=c)
        {
            printf("\n Descending order : %d %d %d",a,b,c);
        }
        else
        {
            printf("\n Descending order : %d %d %d",a,c,b);
        
        }
    }
    else if((b>=a)&&(b>=c))
    {
        if(a>=c)
        {
            printf("\n Descending order : %d %d %d",b,a,c);
           
        }
        else
        {
            printf("\n Descending order : %d %d %d",b,c,a);
          
        }
    }
    else if((c>=a)&&(c>=b))
    {
        if(a>=b)
        {
            printf("\n Descending order : %d %d %d",c,a,b);
           
        }
        else
        {
            printf("\n Descending order : %d %d %d",c,b,a);
        
        }
    }
}

