#include<stdio.h>
int main(){
  int limit,i,item;
  printf("\n Enter the number of elements");
  scanf("%d",&limit);
  int array[limit];
  printf("\n enter %d the elements",limit);
  for(i=0;i<limit;i++){
    scanf("%d",&array[i]);
  }
  printf("\n enter the element to search ");
  scanf("%d",&item);
  for(i=0;i<limit;i++){
   if(item==array[i]){
     printf("the given element is found at position %d",i+1);
     }
  }
  return 0;
}
