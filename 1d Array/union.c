#include<stdio.h>
int main(){
int n;
printf("enter your size of an array");
scanf("%d",&n);
int arr1[n];
for(int i=0;i<n;i++){
scanf("%d",&arr1[i]);
}
int m;
printf("enter your size of 2 array");
scanf("%d",&m);
int arr2[m];
for(int i=0;i<m;i++){
scanf("%d",&arr2[i]);
}
printf("union");
for(int i=0,j=0;i<n,j<m;){
if(arr1[i]>arr2[j]){
printf("%d",arr2[j]);
j++;
}
else if(arr1[i]<arr2[j]){
printf("%d",arr1[i]);
i++;
}
else if(arr1[i]==arr2[j]){
printf("%d",arr1[i]);
i++; j++;
} 
else{
printf("%d",arr1[i]);
printf("%d",arr2[j]);
i++;j++;
}
}
printf("intersection");
for(int i=0,j=0;i<n,j<m;){
if(arr1[i]<arr2[j]){
i++;
}
else if(arr1[i]>arr2[j]){
j++;
}
else if(arr1[i]==arr2[j]){
printf("%d",arr1[i]);
i++;j++;
}
}
return 0;
}