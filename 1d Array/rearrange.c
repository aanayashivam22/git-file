#include<stdio.h>

int main()
{
    int n;
    printf("Enter your size of array\n");
    scanf("%d",&n);
    
     int array[n];
    printf("Enter your eliment of an array\n");
    for(int i=0;i<n;i++) {
     scanf("%d",&array[i]);
    }
    int temp;
    for(int i= 0;i<n;i++) {
    for(int j=0;j<n;j++) {
      if (array[j] ==i) {
        temp=array[j];
        array[j]=array[i];
        array[i]=temp;
        break;
      }
    }
    }
    for(int i=0;i<n;i++) {
       if(array[i]!=i) {
       array[i]=-1;
       }
    }
     
     for(int i=0;i<n;i++) {
      printf("%d ",array[i]);
     }
    return 0;
}
