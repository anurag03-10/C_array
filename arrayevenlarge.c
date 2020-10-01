#include<stdio.h>
void main()
{
 int g,a=0, b[10],s=0,p,count=0;
 printf("Enter %d numbers  ",g);
 
 for(;a<g;a++)
 {
  scanf("%d",&b[a]);
  if((a==0)&&(b[a]%2==0))
  {
   p=b[0];
   count++;
  }
  else
  {
   if(b[a]%2==0)
    p=b[a];
  } 
 }
  if(count==0)
  {
   printf("There is no even number in the array \n");
  }
  else
  {
   printf("\n largest no. among all elements in the array is %d ",p);
  } 
}
