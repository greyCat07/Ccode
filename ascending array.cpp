#include <stdio.h>
#include <conio.h>

void reverse(int[],int[],int);
int main()

{
		int x[10],y[10],n=10;
		int i;
		for(i=0;i<10;i++)
		   {printf("Enter number %d: ",i+1);
		    scanf("%d",&x[i]);
		        }
		reverse(x,y,n);
		printf("Original Array\n");
		for(i=0;i<n;i++)
		    printf("%d, ",x[i]);
		printf("\n\nreversed Array\n");
		for(i=0;i<n;i++)
		    printf("%d, ",y[i]);   
		getch();
	return 0;
}
	void reverse(int x[],int y[],int n)
	{int i;
	for(i=0;i<n;i++)
	    y[i]=x[n-1-i];
}
