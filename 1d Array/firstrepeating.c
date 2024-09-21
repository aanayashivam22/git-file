#include<stdio.h>
int main(){
    int size;
    printf("enter your size of an array");
    scanf("%d",&size);
    int arr[size];int count=1;    
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        
    }
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
             count++;
            }}
            if(count>=2){
            printf("%d is repeated and count is %d",arr[i],count);
            break;
            }
        

    }

return 0;}