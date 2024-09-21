#include<stdio.h>
int main(){
    int size;
    printf("enter your size of an array");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }int index;
    int max1=arr[0];
    for(int i=0;i<size;i++){
        if(max1<arr[i]){
            max1=arr[i];
            index=i;}
       }

        for(int i=index;i<size;i++){
            arr[i]=arr[i+1];
        }
        
    size=size-1;
    int max2=arr[0];
    for(int i=0;i<size;i++){
        if(max2<arr[i]){
            max2=arr[i];
        }
    }
    printf("%d",max2);    
    return 0;
    }