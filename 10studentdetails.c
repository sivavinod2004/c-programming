#include<stdio.h>
typedef struct {
int rollno;
char name[20];
float cgpa;
}student;
int main(){
student s1[3];
for(int i=0;i<3;i++){
printf("enter the roll no");
scanf("%d",&s1[i].rollno);
printf("enter the name");
scanf("%s",s1[i].name);
printf("enter the cgpa");
scanf("%f",&s1[i].cgpa);
}
printf("the student details");
for(int i=0;i<3;i++){
printf("\n name:\t%s",s1[i].name);
printf("\n rollno:\t%d",s1[i].rollno);
printf(" \n cgpa:\t%f",s1[i].cgpa);
}
return 0;
}
