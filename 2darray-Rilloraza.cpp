#include<stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include<conio.h>
#include<process.h>
 
struct block {
	char theblock[5][4];
	char name[50];
	char address[50];
	int age;
	int seatNumber;
};
 
struct block airplane;
 
void reserve()
{
		
	system("cls");
	FILE *fp;
	fp = fopen("Passengers", "a");
	
	int x, y;
	char n[2];
	char answer;
	bool valid = true;
	char seatToBeBlocked[2];
	int noOfSeatsAllocated = 0;
	struct block temp = { { {'A', 'B', 'C', 'D'}, {'A', 'B', 'C', 'D'}, {'A', 'B', 'C', 'D'},
	{'A', 'B', 'C', 'D'},{'A', 'B', 'C', 'D'}} } ;
	airplane = temp ;
	  
	printf("PASSENGER SEAT CODE\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d \t",i+1);
		for (int j = 0; j < 4; j++)
		{
			printf("%c \t",airplane.theblock[i][j]);
		}
			printf("\n");
	}
	
		while(valid == true)
	{
	FILE *fp;
	FILE *fp1;
		
		int columnValue;
	printf("\nEnter Seat Code: ");
    scanf("%s", &airplane.seatNumber);
	switch(seatToBeBlocked[1])
	{
		case 'A' : columnValue = 0;
		break;
		case 'B' : columnValue = 1;
		break;
		case 'C' : columnValue = 2;
		break;
		case 'D' : columnValue = 3;
		break;
		
		default : break;
	}
	int columnToBeBlocked = columnValue;
	  
	char c = seatToBeBlocked[0];
	int rowToBeBlocked = c - '0';
	
	 
	  
	if(airplane.theblock[rowToBeBlocked-1][columnToBeBlocked] != 'X' && noOfSeatsAllocated != 20)
	{
		airplane.theblock[rowToBeBlocked-1][columnToBeBlocked] = 'X';
		noOfSeatsAllocated++;
		printf("seat successfully blocked\n");
		

}	
    	fp = fopen("Passengers", "r");
		fp1 = fopen("Temp", "w");
		while (fread(&airplane.seatNumber, sizeof(airplane), 1, fp))
		{
		if(airplane.theblock[rowToBeBlocked-1][columnToBeBlocked] == 'X' && noOfSeatsAllocated != 20){
		printf("\nSeat is already occupied");
		
		}
		fclose(fp);
		fclose(fp1);
		fp = fopen("Passengers", "w");
		fp1 = fopen("Temp", "r");
		
		while (fread(&airplane.seatNumber,sizeof(airplane), 1, fp1));
		fclose(fp);
		fclose(fp1);
}

	if(seatToBeBlocked[0] == 'n' || seatToBeBlocked[0] == 'N'){
		break;
	}
	if(noOfSeatsAllocated == 20 ){
		printf("Seats are all filled.");
		break;
	}
	printf("Enter Name: ");
	scanf("%s", &airplane.name);
	printf("Enter Age: ");
	scanf("%d", &airplane.age);
	printf("Enter Address: ");
	scanf("%s", &airplane.address);		
	}
	

	 
	fwrite(&airplane, sizeof(airplane), 1, fp);
	printf("\nDone Reservation! Have a safe flight");	
	fclose(fp);

}

void display(){
	
	system("cls");
	FILE *fp;
	fp = fopen("Passengers","r");
	printf("\nSeat Number\tName\t\tAge\tAddress\n");
	while(fread(&airplane,sizeof(airplane),1,fp))
	printf("\n%s\t\t%s\t\t%d\t%s\n\n",&airplane.seatNumber, &airplane.name, airplane.age , &airplane.address);
	fclose(fp);
}

int empty(int sCode){
	
	int i = 0;
	FILE *fp;
	fp = fopen("Passengers", "r");
	while (!feof(fp))
	{
		fread(&airplane, sizeof(airplane), 1, fp);
		if (sCode == airplane.seatNumber)
		{
			fclose(fp);
			return 1;
		}
	}fclose(fp);
	
return 0;
}

void cancel(){
	
	system("cls");
	int x, y;
	FILE *fp;
	FILE *fp1;
	printf("\nSeat Code you want to cancel: ");
	scanf("%s", &x);
	if (empty(x) == 0)	
	printf("\nSeat Code %s is not in the record\n", &x);
	else
	{
		fp = fopen("Passengers", "r");
		fp1 = fopen("Temp", "w");
		while (fread(&airplane, sizeof(airplane), 1, fp))
		{
			y = airplane.seatNumber;
			if (y != x)
			fwrite(&airplane, sizeof(airplane), 1, fp1);
			
		}
		fclose(fp);
		fclose(fp1);
		fp = fopen("Passengers", "w");
		fp1 = fopen("Temp", "r");
		
		while (fread(&airplane,sizeof(airplane), 1, fp1))
		fwrite(&airplane, sizeof(airplane), 1, fp);
		printf("\nThank You! Seat Cancelled\n");
		fclose(fp);
		fclose(fp1);
	}
	
}
int main(){	
	int choice;
	
	do{
		printf("\n----------------------------------------------------------------------------------------------------------------------\n");
		printf("\n\t\t\t\t\tWELCOME TO COMSCI1-5 AIRLINES!\n\n");
		printf("\n----------------------------------------------------------------------------------------------------------------------\n");
		printf("1. Reserve Seat\n");
		printf("2. Display Seat\n");
		printf("3. Cancel Seat\n");
		printf("4. Exit\n");
		printf("\nPlease enter the number of your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: reserve();
			break;
			case 2: display();
			break;
			case 3: cancel();
			break;
			case 4: exit(1);
			break;
			
			default:
				printf("\nInvalid Choice, Try Again...");
			break;
			
		}
	} while(choice != 4);
	
	
	
	reserve();
	display();
	cancel();

	
return 0;
	
}
