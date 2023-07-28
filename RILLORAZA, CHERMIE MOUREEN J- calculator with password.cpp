#include <stdio.h>
#include <string.h>

int main()
{
	int input, num, num1, num2;
	int total=0;
	float quotient=0;
	char string1[20]="Password"; 
    char string2[20]="Password";
    char again[1];
	
    //"Password" is the password
    do {
	
		printf("Enter Password:\n");
  	 	gets(string2);
		
		if (strcmp(string1,string2) != 0) 
		{
			printf("access failed\n");
		}
		else
		{
			printf("\naccess successfull\n\n");
		}
			
		} while (strcmp(string1, string2) != 0);

operation:
 	printf("\nCalculator");
	printf("\n[1] Add");
	printf("\n[2] Subtract");
	printf("\n[3] Multiply");
	printf("\n[4] Divide");
	
	printf("\nEnter the number of your choice: ");
	scanf("%d", &num);
	
	if(num == 1){	
		printf("\nAddition");
		printf("\nEnter a first and second number:");
		scanf("%d %d", &num1, &num2);
		
		total = num1 + num2;
		printf("\nThe sum is %d", total);
		
		printf("\nTry another operation? Y/N  ");
		scanf("%s", &again);
			if(stricmp(again, "y") == 0)
				goto operation;
			else
				return 0;
	}
	else if(num == 2){	
		printf("\nSubtraction");
		printf("\nEnter a first and second number:");
		scanf("%d %d", &num1, &num2);
		
		total = num1 - num2;
		printf("\nThe difference is %d", total);
		
		printf("\nTry another operation? Y/N  ");
		scanf("%s", &again);
			if(stricmp(again, "y") == 0)
				goto operation;
			else
				return 0;
	}
	else if(num == 3){	
		printf("\nMultiplication");
		printf("\nEnter a first and second number:");
		scanf("%d %d", &num1, &num2);
		
		total = num1 * num2;
		printf("\nThe product is %d", total);
		
		printf("\nTry another operation? Y/N  ");
		scanf("%s", &again);
			if(stricmp(again, "y") == 0)
				goto operation;
			else
				return 0;
	}
	else if(num == 4){	
		printf("\nDivision");
		printf("\nEnter a first and second number:");
		scanf("%d %d", &num1, &num2);
		
		quotient = num1 / (float)num2;
		printf("\nThe quotient is %.2f", quotient);
		
		printf("\nTry another operation? Y/N  ");
		scanf("%s", &again);
			if(stricmp(again, "y") == 0)
				goto operation;
			else
				return 0;
	}
	
	return 0;
}
