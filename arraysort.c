#include<stdio.h>
void main()
{
 int k,a[10],j, b=0,i=9;
 
 printf("Enter numbers  ");
 for(;b<10;b++)
 {
  scanf("%d",&a[b]);
 } 
 printf("Number in ascending order are  \n");
 for(;i>=0;i--)
 {
  for(j=0;j<=i;j++)
  {
   if(a[j]>a[j+1])
   {
    k=a[j];
    a[j]=a[j+1];
    a[j+1]=k;
   }
  }
  }
  for(b=0;b<10;b++)
 {
  printf("%d ",a[b]);
 }
} 

