#include<stdio.h>

main()
{
	int a[5],i,n,large,small,product;
	
	printf("\nEnter five integers:\n");
	
	for(i=0;i<5;++i)
	scanf("%d",&a[i]);
	
	large=small=a[0];
	
	for(i=1;i<5;++i)
	{
		if(a[i]>large)
		large=a[i];
		if(a[i]<small)
		small=a[i];
	}
	
	printf("\nThe highest element is %d\n",large);
	printf("\nThe lowest element is %d\n",small);
	
	product=small*large;
	printf("The product of the highest and lowest is: %d",product);
	return 0;
}
