#include<stdio.h>

int main(){
	int array1[5];
	int array2[5];
	int arrayEven[5];
	int arrayOdd[5];
	int j=0;
	int k=0;
	
	printf("Enter the elements of array 1: ");
	for(int a = 1; a <= 5; a++){
		scanf("%d", &array1[a]);	
	}
	printf("Enter the elements of array 2: ");
	for(int b = 1; b <= 5; b++){
		scanf("%d", &array2[b]);	
	}

	for(int i = 1; i <= 5; i++){
		if((array1[i] % 2) == 0 && array1[i] != 1){
			arrayEven[j++] = array1[i];
		}
		else{
			arrayOdd[k++] = array1[i];
		}
	}
	for(int l = 1; l <= 5; l++){
		if((array2[l] % 2) == 0 && array2[l] != 1){
			arrayEven[j++] = array2[l];
		}
		else{
			arrayOdd[k++] = array2[l];
		}
	}
	
	printf("\n.......................................");
	
	printf("\nElements of array 1: ");
	for(int y = 1; y <= 5; y++){
		printf("%d ", array1[y]);
	}
	printf("\nElements of array 2: ");
	for(int z = 1; z <= 5; z++){
		printf("%d ", array2[z]);
	}
	
	printf("\n.......................................");
	
	
	printf("\n\nOdd numbers of the two arrays: ");
	for(int n = 0; n < k; n++){
		printf("%d ", arrayOdd[n]);
	}
	
	printf("\nEven numbers of the two arrays: ");
	for(int m = 0; m < j; m++){
		printf("%d ", arrayEven[m]);
	}
	return 0;
}
