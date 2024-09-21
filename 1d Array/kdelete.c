#include<stdio.h>
int main(){
  int size;
  printf("Enter size of array\n");
  scanf("%d",&size);
  int array[size];
  printf("Enter eliment of array\n");
  for(int i=0;i<size;i++) {
  scanf("%d",&array[i]);
  }
  int k;
  printf("Enter your k eliment to delete\n");
  scanf("%d",&k);
  k=k-1;
  int temp;
  for(int i=k;i<size;i++) {
     array[i]=array[i+1];
  }
  for(int i=0;i<size-1;i++) {
   printf("%d ",array [i]);
  }
return 0;
}