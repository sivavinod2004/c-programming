/*author:sivapriya😁
date:26/03/2025
.Power of a Number Using Recursion: Write a program to calculate the power of a number using recursion. The base and exponent should be taken as input from the user.*/
#include<stdio.h>
int power(int num,int expo){
if(expo==0){
 return 1;
 }
 else{
 return num*power(num,expo-1);
 }
 }

int main(){
int num,expo;
printf("enter number and exponent respectively");
scanf("%d%d",&num,&expo);
printf("the answer %d",power(num,expo));
return 0;
}

