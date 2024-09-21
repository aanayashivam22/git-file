#include<stdio.h>
int main(){
int n;
printf("Enter your size of an array\n");
scanf("%d",&n);
int array[n];
for (int i = 0; i <n; i++){
printf("Enter your %d eliment of an array ",i+1);
scanf("%d",&array[i]);
}
int time;
printf("Enter your number you want to rotate\n");
scanf("%d",&time);
for(int i=0;i<time;i++){
int num=array[n-1];
for ( int j= n-1; j>=0 ; j--){
array[j]=array[j-1];}
array[0]=num;
}
printf("Array after one time rotation \n");
for (int i = 0; i < n; i++){
printf("%d ",array[i]);}
return 0;
}
