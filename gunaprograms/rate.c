#include<stdio.h>
int main(){
	int volume  ;
	float time;
	double rate ;
	printf("enter volume to be infused");
	scanf("%d",&volume);
	printf("Enter for how much time it is being infused in minutes");
	scanf("%f",&time);
	time=time/60;
	rate= volume/time;
	printf("volume to be infused is %d",volume);
	printf("rate is %lf ml/hour",rate);
	return 0;
}
