#include <stdio.h>
#include <string.h>

int main()
{
	char str[50], str2[50];
	
	
	printf("Please enter a password: ");
	scanf("%s", str);
    
    do {
	
		printf("Password: ");
		scanf("%s", str2);
		
		if (strcmp(str2, str) != 0) 
		{
			printf("wrong password\n");
		}
		else
		{
			printf("\ncorrect password\n\n");
		}
			
		} while (strcmp(str2, str) != 0);
	
	return 0;
}

