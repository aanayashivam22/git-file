#include<stdio.h>
int main(){
    int size;
    printf("enter your size of an array");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }int temp;int max=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    max=arr[0]-arr[size-1];
    
    printf("max difference is %d",max);
}