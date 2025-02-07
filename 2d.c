#include<stdio.h>
int main(){
  int matrix[2][2]={{},{}};
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
    printf("\t%d",matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}
