#include<stdio.h>
int main(){
  int row,column;
  printf("enter the number of rows and columns");
  scanf("%d%d",&row,&column);
  int matrix [row][column];
  printf("\n enter the elements");
  for(int i=0;i<row;i++){
   for(int j=0;j<column;j++){
    scanf("%d",&matrix[i][j]);
    }
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
      printf("%d\t",matrix[i][j]);
     }
     printf("\n");
  }
  return 0;
}
