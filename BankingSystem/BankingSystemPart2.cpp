#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#include<ctype.h>

struct record
{
	int acc;
	int pin;
	float balance;
};

int main(){ 
	FILE *fp, *tp;
	struct record myfriend; 
	char file[50] = "account.dat"; 
	int acc[99], pin[99], i=0, j, k, in_acc, in_pin, bank=0, choice, no_acc;
	float balance[99], deposit, withdraw;
	
	fp = fopen(file, "rb");
	if(fp == 0){ 
		printf("Error");
		exit(1);
	}
	tp = fopen("temp.dat", "wb");
	if(tp == 0){
		printf("Error");
		exit(1);
	}
	
	while(fread(&myfriend, sizeof(struct record),1,fp) != NULL){
		acc[i] = myfriend.acc;
		pin[i] = myfriend.pin;
		balance[i] = myfriend.balance;
		i++;	
	}
	
	printf("Enter account number: ");
	scanf("%d", &in_acc);
	for(j = 0; j <= i; j++){
		if(in_acc == acc[j]){
			printf("Enter PIN number: ");
			scanf("%d", &in_pin);
			if(in_pin == pin[j]){
				bank = 1;
				break;
			}
			else{
				printf("Wrong PIN number!");
				exit(1);
			}
		}
		else{
			no_acc=1;
			continue;
		}
	}
	if(no_acc == 1){
		printf("Invalid Account Number.");
		exit(1);
	}
	if(bank == 1){
		do{
			printf("\n\nWelcome to PUP-On-Line Banking Systems\n\n");
			printf("1. Balance Inquiry\n");
			printf("2. Deposit\n");
			printf("3. Withdraw\n");
			printf("4. To Exit\n");
			printf("Press the number of your choice: ");
			scanf("%d", &choice);
			
			switch(choice){
			case 1:
				system("cls");
				printf("Balance: %f", balance[j]);
				break;
			case 2:
				system("cls");
				printf("How much money will you deposit? ");
				scanf("%f", &deposit);
				
				balance[j] = balance[j] + deposit;
				myfriend.acc = acc[j];
				myfriend.pin = pin[j];
				myfriend.balance = balance[j];
				fwrite(&myfriend, sizeof(struct record),1,tp);
				for(k = 0; k < i; k++){
					if(k != j){
						myfriend.acc = acc[k];
						myfriend.pin = pin[k];
						myfriend.balance = balance[k];
						fwrite(&myfriend, sizeof(struct record),1,tp);	
					}
					else{
						continue;
					}		
				}
				fclose(fp);
				fclose(tp);
				remove(file);
				rename("temp.dat", file);
				printf("Done.");
				exit(1);
				
			case 3:
				system("cls");
				printf("How much money will you withdraw? ");
				scanf("%f", &withdraw);
				
				balance[j] = balance[j] - withdraw;
				myfriend.acc = acc[j];
				myfriend.pin = pin[j];
				myfriend.balance = balance[j];
				fwrite(&myfriend, sizeof(struct record),1,tp);
				for(k = 0; k < i; k++){
					if(k != j){
						myfriend.acc = acc[k];
						myfriend.pin = pin[k];
						myfriend.balance = balance[k];
						fwrite(&myfriend, sizeof(struct record),1,tp);	
					}
					else{
						continue;
					}		
				}
				fclose(fp);
				fclose(tp);
				remove(file);
				rename("temp.dat", file);
				
				printf("Done.");
				exit(1);
			case 4:
				exit(1);
			default:
				printf("Wrong number of choice.");
				exit(1);
			}
			getch();
		}while(choice != 4);
	
	}
	else{
		exit(1);
	}
}
