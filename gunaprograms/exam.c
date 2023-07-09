#include<stdio.h>
int main(){
int units[6];
float totalcost[5];
char name[5][20];
int ebnumber[5];
for(int i=0;i<5;i++){
printf("enter the ebnumber ");
scanf("%d",&ebnumber[i]);
printf("enter the number of units");
scanf("%d",&units[i]);

if (units[i]<=100){
        printf("no bill");
}

 

else if(units[i]>=101 && units[i]<=400){
	totalcost[i]=(units[i]-100)*2.25;
	printf("%f",totalcost[i]);
}
else if(units[i]>=401 && units[i]<=500){
       
	totalcost[i]= 300*2.25 + (units[i]-400)*4.50;
      printf("%f",totalcost[i]);

}

else if ( units[i]>=501 && units[i]<=600){
	 totalcost[i]= 300*2.25 + 100*4.50 +(units[i]-500)*6;
	 printf("%f",totalcost[i]);

}
else if ( units[i]>=601 && units[i]<=600000000){
	 totalcost[i]= 300*2.25 + 100*4.50+ 100*6 + (units[i] - 600)*8;
	  printf("%f",totalcost[i]);
}
else {
	printf("invalid input");
}
}
return 0;
}


