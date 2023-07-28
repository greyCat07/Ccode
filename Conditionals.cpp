#include<stdio.h>
#include<conio.h>
int main(void)
{
    int age;
    clrscr();
    printf("Enter the age : ");
    scanf("%d", &age);
    
	    if(age <=12)
		{
			printf("C");
		}
	    else (age >=13 and <=19)
		}
	    printf("T");
		}
	    else(age >=20)
		}
	    printf("A");
	    
	    getch();
}


    
	 #include <stdio.h>
int main (void)
{
  int age;

  printf("Input the age: ");
  scanf("%d",&age);
  if ( age <=13 and age >=19 )
     {
       printf("the person is teen-ager");
     }
  else
     printf("adult");
}

#include <stdio.h>
int main(void){
int num;
printf("Enter your mark ");
scanf("%d",&num);
printf(" You entered %d", num); // printing outputs

	if(num >= 80){
	printf(" You got A grade"); // printing outputs
		}
	else if ( num >=60){ // Note the space between else & if
		printf(" You got B grade");
		}
	else if ( num >=40){
		printf(" You got C grade");
		}
	else if ( num < 40){
		printf(" You Failed in this exam");
		}
return 0;
}

