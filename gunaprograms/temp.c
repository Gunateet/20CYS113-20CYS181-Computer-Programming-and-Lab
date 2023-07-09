#include<stdio.h>
int main(){

	int t , temperature ;
	printf("enter the value of t");
	scanf("%d",&t);
	temperature= ((4*t*t)/(2*t+2))-20;
	printf("%d",temperature);
	return 0;
}
