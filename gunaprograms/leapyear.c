#include<stdio.h>
int main (){
int year ;
printf("Enter the year");
scanf("%d",&year);
if (year%100==0 && year%400==0){
	printf("the given year is leap year");
}
else if(year%4==0){
	printf("the given year is leap year");

	}

	else {
	printf("the given year is not a leap year");	
	}
return 0;
	}



