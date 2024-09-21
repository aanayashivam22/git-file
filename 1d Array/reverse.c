#include<stdio.h>
int main(){
 int n;
printf("Enter your size of an array\n");
scanf("%d",&n);
int array[n];
for(int i = 0; i <n; i++){
printf("Enter your %d eliment of an array ",i+1);
scanf("%d",&array[i]);
}
int temp;
for (int i=0,j=n-1; i<=j; i++,j--){
    temp=array[i];
    array[i]=array[j];
    array[j]=temp;
}
for (int i = 0; i < n; i++){
printf("%d ",array[i]);
}
return 0;
}
