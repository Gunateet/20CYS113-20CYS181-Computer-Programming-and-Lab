#include<stdio.h>
int main(){
	FILE *fd;
	fd=fopen("todayswork.txt","r");
	if(fd==NULL){
		printf("the file exists");
	}
		else
			printf("The file does not exist");
	return 0;
}

