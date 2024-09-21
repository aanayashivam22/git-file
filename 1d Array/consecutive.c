#include<stdio.h>
int main(){
 
 int n;
 printf("Enter your size of an array\n");
 scanf("%d",&n);
int array[n];

 for ( int i = 0; i <n; i++)
 {
    printf("Enter your %d eliment of an array ",i+1);
    scanf("%d",&array[i]);
 }
    int num=array[0];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if (num+i==array[i])
        {
            count++;
            if (count==n)
            {
                printf("There is no missing number\n");
            }
            
        }
        else{printf("%d is a missing number",num+i);break;}
    }
    
 
 return 0;
}
