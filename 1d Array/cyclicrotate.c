#include<stdio.h>
int main(){
 int n;
printf("Enter your size of an array\n");
scanf("%d",&n);
int array[n];
for(int i = 0; i <n; i++){
printf("Enter your %d eliment of an array ",i+1);
scanf("%d",&array[i]);}
int num =array[n-1];
for (int i = n-1; i>0 ; i--){
array[i]=array[i-1];
}
array[0]=num;
printf("Array after one time rotation \n");
for (int i = 0; i < n; i++){
printf("%d ",array[i]);
}
return 0;
}