#include<stdio.h>
int main(){
  int num1,num2,calculator;
  char am;
  printf("enter two numbers");
  scanf("%d%d",&num1,&num2);
  printf("choose a operator");
  scanf(" %c",&am);
  switch(am){
  case '+':
  printf("sum :%d",num1+num2);
  break;
  case '-':
  printf("difference :%d",num1-num2);
  break;
  case'*':
  printf("product:%d",num1*num2);
  break;
  case'/':
  printf("quotiant:%d",num1/num2);
  break;
  case'%':
  printf("reminder:%d",num1%num2);
  break;
  default:("invalid");
  break;
  }
return 0;
}
  
  
  
