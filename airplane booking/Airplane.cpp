#include<stdlib.h>
#include <stdio.h>
#include <stdbool.h>
 
struct block {
char theblock[5][4];

};
 
struct block blockArray[1];
 
int main()
{
	char n[2];
	char answer;
	bool valid = true;
	char seatToBeBlocked[2];
	int noOfSeatsAllocated = 0;
	struct block temp = { { {'A', 'B', 'C', 'D'}, {'A', 'B', 'C', 'D'}, {'A', 'B', 'C', 'D'},
	{'A', 'B', 'C', 'D'},{'A', 'B', 'C', 'D'}} } ;
	blockArray[0] = temp ;
	  
	printf("AVAILABLE PASSENGER SEATS\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d \t",i+1);
		for (int j = 0; j < 4; j++)
		{
			printf("%c \t",blockArray[0].theblock[i][j]);
		}
			printf("\n");
	}
	while(valid == true)
	{
		int columnValue;
		printf("\nPlease input your assigned seat (Ex. 1A) or enter N to end the program\n");
		scanf( "%s", seatToBeBlocked );
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
	
	 
	  
	if(blockArray[0].theblock[rowToBeBlocked-1][columnToBeBlocked] != 'X' && noOfSeatsAllocated != 20)
	{
		blockArray[0].theblock[rowToBeBlocked-1][columnToBeBlocked] = 'X';
		noOfSeatsAllocated++;
		printf("seat successfully blocked\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d \t",i+1);
		for (int j = 0; j < 4; j++)
		{
			printf("%c \t",blockArray[0].theblock[i][j]);
		}
		printf("\n");
	}
}
	else if(blockArray[0].theblock[rowToBeBlocked-1][columnToBeBlocked] == 'X' && noOfSeatsAllocated != 20){
		printf("\nSeat is already occupied");
		
	
}

	if(seatToBeBlocked[0] == 'n' || seatToBeBlocked[0] == 'N'){
		break;
	}
	if(noOfSeatsAllocated == 20 ){
		printf("Seats are all filled.");
		break;
	}
		
	}
	
	
	return 0;
}
