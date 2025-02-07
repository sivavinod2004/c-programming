#include<stdio.h>
int main(){
 int row,col,sum;
 printf("enter the number of rows and columns ");
 scanf("%d%d",&row,&col);
 int m1[row][col],m2[row][col],m3[row][col];
 printf("\nenter the elements");
 for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
   scanf("%d",&m1[i][j]);
  }
 }
 for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
   scanf("%d",&m2[i][j]);
  }
 }
 for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
   m3[i][j]=m1[i][j]+m2[i][j];
   }
  }
 for(int i=0;i<row;i++){
  for(int j=0;j<col;j++){
   printf("%d\t",m3[i][j]);
   }
   printf("\n");
   }
   return 0;
}
 
   
