#include<stdio.h>

int main(){
	struct restaurant{
		char name[99];
		char address[99];
		float averagecost;
		char typeoffood[99];
	};
	struct restaurant rest;
	printf("Enter name of the restaurant: ");
	gets(rest.name);
	printf("Enter address of the restaurant: ");
	gets(rest.address);
	printf("Enter average cost: ");
	scanf("%f", &rest.averagecost);
	printf("Enter type of food: ");
	scanf("%s", &rest.typeoffood);
	
	printf("\n\nName: %s\n", rest.name);
	printf("Address: %s\n", rest.address);
	printf("Average Cost: %.2f\n", rest.averagecost);
	printf("Type of Food: %s\n", rest.typeoffood);
	
	return 0;
}

