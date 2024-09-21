#include<stdio.h>
int main(){
    int size;
    printf("enter your size of an array\n");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int countEven=0;
    int countOdd=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
           countEven++;
        }
        else{
            countOdd++;
        }
        
    }
    int arr1[countEven],arr2[countOdd];int e=0;int o=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
           arr1[e]=arr[i];
            e++;
        }
        else{
            arr2[o]=arr[i];
            o++;
        }
    }
    printf("even arrays");
    for(int i=0;i<e;i++){
    printf("%d",arr1[i]);}
    printf("odd arrays");
    for(int i=0;i<o;i++){
    printf("%d",arr2[i]);
    }
    return 0;
    }
