#include<stdio.h>
int main(){
int size;
printf("enter your size of an array");
scanf("%d",&size);
int arr[size];
for ( int i = 0; i < size; i++){
scanf("%d",&arr[i]);    
}int temp;
for(int i=0;i<size;i++){
for(int j=0;i<size;j++){
if(arr[j]==i){
    temp=arr[i];
    arr[j]=arr[i];
    arr[i]=temp;
    break;
}
}
}
for(int i=0;i<size;i++){
if(arr[i]!=-1){
arr[i]=-1;
}
}
for(int i=0;i<size;i++){
printf("%d",arr[i]);}
return 0;
}
