#include<stdio.h>
int main(){
  char str1[20],temp;
  int length;
  printf("enter a string");
  scanf("%s",str1);
  
  for(length=0;str1[length]!='\0';length++);
  int i=length-1;
  for(int j=0;j<length/2;j++){
  temp=str1[i];
  str1[i]=str1[j];
  str1[j]=temp;
  i--;
  }
  temp='\0';
   
  printf("the reversed string is %s",str1);

  return 0;
}
  
