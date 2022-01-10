#include <stdio.h>
void red();
void yellow();
void green();
void blue();
void cayan();
void purple();
struct stu_details{
    int roll_no;
    char name[20];
    int mark1,mark2,mark3;
}stu;
void red(){
	printf("\033[0;31m");
}
void green(){
	printf("\033[0;32m");
}
void yellow(){
	printf("\033[0;33m");
}
void blue(){
	printf("\033[0;34m");
}
void purple(){
	printf("\033[0;35m");
}
void cayan(){
	printf("\033[0;36m");
}
void reset(){
	printf("\033[0m");
}
int main()
{
    FILE *fptr;
    fptr=(fopen("D:\\stu_details.txt","a"));
    if (fptr!=NULL){
        int i;
        red();
        printf("\nEnter the Number of Students:");
        scanf("%d",&i);
        for(int j=1;j<=i;j++){
        	printf("%d student details",j);
            yellow();
			printf("\nEnter the Student Roll No:");
            scanf("%d",&stu.roll_no);
            green();
			printf("\nEnter the Student Name:");
            scanf("%s",&stu.name);
            blue();
			printf("\nEnter the 1st Subject Mark:");
            scanf("%d",&stu.mark1);
            purple();
			printf("\nEnter the 2nd Subject Mark:");
            scanf("%d",&stu.mark2);
            cayan();
			printf("\nEnter the 3rd Subject Mark:");
            scanf("%d",&stu.mark3);
            red();
            fprintf(fptr,"\nRoll No:%d\nName:%s\n1st Subject Mark:%d\n2nd Subject Mark:%d\n3rd Subject Mark:%d",stu.roll_no,stu.name,stu.mark1,stu.mark2,stu.mark3);
        }
        
    }
    else{
    		red();
            printf("Error");
        }
   return 0;
}
