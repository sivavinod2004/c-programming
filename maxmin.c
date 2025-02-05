#include<stdio.h>
int main(){
  int i,limit,largest,smallest,largest_position,smallest_position;
  printf("\n Enter the number of elements");
  scanf("%d",&limit);
  int number[limit];
  printf("\n Enter%d the elements",limit);
  for(i=0;i<limit;i++){
    scanf("%d",&number[i]);
    }
  largest=number[0];
  smallest=number[1];
  for(i=0;i<limit;i++){
    if(number[i]>largest){
      largest=number[i];
      largest_position=i+1;
    }
    if(number[i]<smallest){
      smallest=number[i];
      smallest_position=i+1;
    }
  }
  printf("\n largest is %d,at the position %d",largest,largest_position);
  printf("\n smallest is %d,at position %d",smallest,smallest_position);
  return 0;
}
