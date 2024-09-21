//dsa Q19
#include<stdio.h>
int main(){
int size;
printf("enter your size");
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
scanf("%d",&arr[i]);
}
int k;
printf("enter your number which you want to delete");
scanf("%d",&k);
int temp;
for(int i=0;i<size;i++){
if(arr[i]==k){
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;}
}
size=size-1;
for(int i=0;i<size;i++){
    printf("%d",arr[i]);
}
return 0;
}