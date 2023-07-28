#include <stdio.h>

main()

{
	int hours, minutes, result;
	printf("\n\n\t Please enter hours and minutes\n");
	printf("\t hours:minutes = ");
	scanf("%d:%d" ,&hours,&minutes);
	result=hours*60;
	result=result+minutes;
	printf("\n\t %d hours:%d minutes = %d minutes",hours, minutes,result);
	return 0;

}
