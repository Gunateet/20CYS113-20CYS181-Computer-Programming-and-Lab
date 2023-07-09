#include<stdio.h>
int main(){
	FILE *fa;
        fa = fopen("file.txt","r");
        if( fa != NULL){
	        char c;
        	while((c = fgetc(fa)) != EOF){
        		putchar(c);
		}
                fclose(fa);
	}
        else
                printf("Error in opening the file\n");
	return 0;
}

