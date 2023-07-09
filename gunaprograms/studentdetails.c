#include<stdio.h>
int main(){
	struct reportcard{
		int rollno;
		int marks[6];
		int totalmarks;
		char name[30];
		float cgpa;
	} student[30];
	int i,j;
	for (i=0; i<2 ; i++){
		printf("enter the name");
		scanf("%s",student[i].name);
       		printf("enter the rollno");
       		scanf("%d",&student[i].rollno);
       		printf("enter the marks");
		student[i].totalmarks=0;
       		for(j=0;j<6;j++){
       			scanf("%d",&student[i].marks[j]);
			 
       student[i].totalmarks=student[i].totalmarks+student[i].marks[j];
       		} 
    
       student[i].cgpa=student[i].totalmarks/60;
       printf("Name:%s",student[i].name);
       printf("rollno:%d",student[i].rollno);
       printf("totalmarks:%d",student[i].totalmarks);
       printf("cgpa:%f",student[i].cgpa);
}
       return 0;
}
       
       







	

