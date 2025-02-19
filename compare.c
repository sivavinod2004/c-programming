/*
sivapriyaav
comparing two string*/
#include<stdio.h>
#include<string.h>
int main(){
 char str1[20],str2[20];
 printf("enter a string");
 scanf("%s",str1);
 printf("enter another string");
 scanf("%s",str2);
 if(strcmp(str1,str2)==0){
 printf("same");
 }
 else{
 printf("not same");
 }
 return 0;
}
