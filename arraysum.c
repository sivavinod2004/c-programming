/*author:sivapriya😁
date:26/03/2025
Sum of Array Elements: Create a program to calculate the sum of array elements by passing the array to a function. Display the sum in the main function.*/
#include<stdio.h>
int sum(int array[],int limit);
int main(){
int limit;
printf("Enter the limit of the array:");
scanf("%d",&limit);
int array[limit];
sum(array,limit);
return 0;
}
int sum(int array[],int limit){
int arraysum=0;
int i;
printf("Enter the elements:");
for (i=0;i<limit;i++){
scanf("%d",&array[i]);
arraysum+=array[i];
}
printf("%d is the sum of the elements",arraysum);
return arraysum;
}
