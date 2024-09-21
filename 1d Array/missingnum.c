#include<stdio.h>
int main(){
    int size;
    printf("enter your size of an array");
    scanf("%d",&size);
    int arr[size];
    for ( int i = 0; i < size; i++)
    {scanf("%d",&arr[i]);}
    int num=arr[0];
    for(int i=0;i<size;i++){
        if(num==arr[i]){
            num++;
        }
    }
    printf("%d is missing num",num);
        
    
    return 0;
}