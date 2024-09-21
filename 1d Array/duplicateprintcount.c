#include<stdio.h>
int main(){
 
 int n;
 printf("Enter your size of an array\n");
 scanf("%d",&n);
int array[n];

 for (
    int i = 0; i <n; i++)
 {
    printf("Enter your %d eliment of an array ",i+1);
    scanf("%d",&array[i]);
 }
    int temp;
  for (int i = 0; i <n; i++)
  {
      for (int j = i+1; j< n; j++)
      {
       if ( array[i]>array[j])
       {
         temp=array[i];
         array[i]=array[j];
         array[j]=temp;
       }
        
      }
  }
  
int count=0;

for (int i = 0; i < n; i++)
{
   for ( int j = i; j < n; j++)
   {
      if (array[i]==array[j])
      {
         count++;
      }
      
   }
   if (count>1)
   {
      printf("%d is a repetative number \n count = %d\n",array[i],count);
      i=i+count-1;
   }
   count=0;
}

return 0;
}


