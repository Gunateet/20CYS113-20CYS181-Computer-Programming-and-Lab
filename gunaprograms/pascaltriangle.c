#include<stdio.h>
#include<math.h>
int main(){
	int i,n,m;


printf("enter number of rows");
scanf("%d",&i);
for(n=1;n<=i;n++){
	for(m=1;m<=i;m++){
		printf("%i",pow(11,n));
	}
	printf("\n");
}
return 0;
}

		
