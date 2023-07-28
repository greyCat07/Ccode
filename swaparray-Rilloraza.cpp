#include<stdio.h>

int main(){
	int array1[3][3];
	int array2[3][3];
	int temp,i,j;
	
	printf("Elements of the 1st array: \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &array1[i][j]);
		}
	}
	
	printf("Elements of the 2nd array: \n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &array2[i][j]);
		}
	}
	
	printf("\nBefore Swap\n");
	printf("1st Array:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", array1[i][j]);
		}
		printf("\n");
	}
	printf("2nd Array:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", array2[i][j]);
		}
		printf("\n");
	}
	
	//Swap
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			temp = array1[i][j];
			array1[i][j] = array2[i][j];
			array2[i][j] = temp;
		}
	}
	
	printf("\nAfter Swap\n");
	printf("1st Array:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", array1[i][j]);
		}
		printf("\n");
	}
	printf("2nd Array:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", array2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
