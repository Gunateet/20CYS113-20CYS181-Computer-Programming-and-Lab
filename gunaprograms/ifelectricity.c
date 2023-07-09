#include<stdio.h>
int main(){
int units;
float bill,totalcost;
printf("enter the no. of units");
scanf("%d",&units);
if(units>=0 && units<=50){
	totalcost= units*0.50 ;
	bill= totalcost + (20*totalcost/100);
	printf("your bill is %f",bill);
}
else if(units>=51 && units<=150){
        totalcost= (50*0.5) + (units -50)*0.75 ;
        bill= totalcost + (20*totalcost/100);
        printf("your bill is %f",bill);
}
else if (units>=151 && units<=250){
        totalcost= (50*0.5)+(100*0.75) + (units -150)*1.20 ;
        bill= totalcost + (20*totalcost/100);
        printf("your bill is %f",bill);
}
else if (units>=251){
        totalcost= (50*0.5) +(100*0.75)+(100*1.20) + (units-250)*0.75 ;
        bill= totalcost + (20*totalcost/100);
        printf("your bill is %f",bill);	
}
else 
	printf("invalid input");
return 0;
}
