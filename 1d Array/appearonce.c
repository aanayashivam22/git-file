#include<stdio.h>
int main(){
    int size;
    printf("enter your size of an array");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }int count=0;
    for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }
        if(count==0){
        printf("%d",arr[i]);}
        }
    return 0;
    }