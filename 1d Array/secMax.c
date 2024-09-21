#include<stdio.h>
#include<math.h>
int main(){

int n;
printf("Enter your size of an array\n");
scanf("%d",&n);

int array[n];
printf("Enter your eliment of an array\n");

for(int i=0;i<n;i++){
    scanf("%d",&array[i]);
}

int max,secMax;
max=-999;
secMax=-999;

for (int  i = 0; i < n; i++)
{
    if (max<array[i])
    {
        secMax=max;
        max=array[i];
    }
     if (secMax<array[i]&&max!=array[i])
    {
        secMax=max;
        max=array[i];
    }
}

// for (int i = 0; i < n; i++)
// {
//     if (max!=array[i])
//     {
//         if (array[i]>secMax)
//         {
//             secMax=array[i];
//         }
        
//     }
    
// }

printf("The second max is %d",secMax);
    return 0;
}