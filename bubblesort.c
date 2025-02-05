#include<stdio.h>
int main(){
  int i,j,n,temp;
  printf("\n Enter the number of elements");
  scanf("%d",&n);
  int number[n];
  printf("\n Enter %d the elements",n);
  for(i=0;i<n;i++){
    scanf("%d",&number[i]);
  }
  for(i=0;i<n-1;i++){
    for(j=0;j<n-i;j++){
      if(number[j]>number[j+1]){
       temp=number[j];
       number[j]=number[j+1];
       number[j+1]=temp;
      }
    }
  }
  printf("\n the sort array:");
  for(i=0;i<n;i++){
    printf("%d",number[i]);
  }
  return 0;
}
