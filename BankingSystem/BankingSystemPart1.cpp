#include<stdio.h>
#include<conio.h>
#include<process.h>
struct record
{
	int acc;
	int pin;
	float balance;
};
int main(){
	FILE *fp; 
	struct record banking; 
	char file[50] = "account.dat";
	int a;
	fp = fopen(file, "ab"); 
	if(fp == NULL)
	{
		printf("Error creating file");
		exit(1);
	}
	for(a = 0; a < 1; a++)
	{
		printf("Enter account number: ");
		scanf("%d", &banking.acc);
		if(banking.acc >= 10000 && banking.acc <= 99999){
			printf("Enter PIN number: ");
			scanf("%d", &banking.pin);
			if(banking.pin >= 1000 && banking.pin <= 9999){
				printf("Enter balance: ");
				scanf("%f", &banking.balance);
				fwrite(&banking, sizeof(struct record),1,fp);
			}
		}
	}
	fclose(fp); 
}

