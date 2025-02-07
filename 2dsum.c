#include<stdio.h>
int main(){
 int row,col,sum;
 printf("enter the number of rows and columns ");
 scanf("%d%d",&row,&col);
 int matrix[row][col];
 printf("\nenter the elements");
 for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
   scanf("%d",&matrix[i][j]);
  }
 } 
 for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
   if (i==j){
     sum=sum+matrix[i][j];
     printf("%d\t",matrix[i][j]);
   }
  }
 printf("\n");
 } 
 printf("the sum is %d ",sum);
 return 0;
}
    
   
