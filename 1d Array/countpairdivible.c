#include<stdio.h>
int main(){
int size;
printf("enter your size of an array");
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
}int k;
printf("enter your value of k");
scanf("%d",&k);int count=0;
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if ((arr[i]+arr[j])%k==0){
            count++;
        }
        
    }
}
printf("count of pairs is %d",count);


return 0;
}