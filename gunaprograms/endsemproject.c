#include<stdio.h>
int main(){
	printf("enter the corresponding number of subject you would like to study\n");                                                                                                  	printf("1 :Newsletters\n");
                          printf("2 :Literature\n");
                          printf("3 :Physics\n");
                          printf("4 :Chemistry\n");
                                          
                          printf("5 :Biology\n");
                          printf("6 :Mathematics\n");
                          printf("7 :General_Knowledge\n");
                          printf("8 :Politics\n");
                          printf("9 :Economics\n");
                         printf("10 :Magazines\n");
                         printf("11 :Technology\n");


int readme;
printf("Enter the Value");
scanf("%d",&readme);
 switch (readme){
case 1: {

FILE *fa;
        fa = fopen("file.txt","r");
        if( fa != NULL){
                char c;
                while((c = fgetc(fa)) != EOF){
                        //putchar(c);
			printf("%c",c);
                }
                fclose(fa);
        }
        else{
                printf("Error in opening the file\n");   
       
	}	

}

}	 
		
	 
return 0;
}
                                        
