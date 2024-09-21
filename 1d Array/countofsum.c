#include<stdio.h>
int main(){
int size;
printf("Size: ");
scanf("%d",&size);
int scount=0;
int ocount=0;
int arr[size];
for(int i=0;i<size;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<size;i++){
if(arr[i]%2==0){
    scount++;
}  
else{
    ocount++;
}
}
printf("%d",scount);
printf("%d",ocount);
return 0;
}