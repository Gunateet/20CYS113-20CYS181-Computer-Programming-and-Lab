#include<stdio.h>
int main(){
        int tm,ns;
	double average;
printf("enter the value of tm");
    scanf("%d",&tm);
    printf("enter the value of ns");
     scanf("%d",&ns);
       average = (double)tm/(double)ns;
       printf("The average is %lf",average);
       return 0;
}
