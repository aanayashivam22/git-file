#include<stdio.h>
int main(){
int size;
printf("enter your size of an array");
scanf("%d",&size);
int arr[size];
int temp;
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
    if(arr[i]>arr[j]){
     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp; } 
    }
}
int k;
printf("enter your k element which you want");
scanf("%d",&k);
printf("k min element is %d",arr[k-1]);
return 0;
}



