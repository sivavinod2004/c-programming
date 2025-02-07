/*c 
author:sivapriya.A.V
program to find sum of 2 matrix :)
*/
#include<stdio.h>
int main(){
 int row ,col,trans;
 printf("enter the number of rows and columns");
 scanf("%d%d",&row,&col);
 printf("\n enter the elements");
 int matrix[row][col];
 for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
   scanf("%d",&matrix[i][j]);
  }
 }
 for(int i=0;i<col;i++){
  for(int j=0;j<row;j++){
   printf("%d\t",matrix[j][i]);
   
  }
  printf("\n");
 }
 return 0;
}
