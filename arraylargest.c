#include<stdio.h>
void main()
{
 int g,a=0, b[10],s=0,p;
 printf("Enter the total number");
 scanf("%d",&g);
 printf("Enter %d numbers  ",g);
 
 for(;a<g;a++)
 {
  scanf("%d",&b[a]);
  if(a==0)
  {
   p=b[a];
  }
  else
  { 
   if(b[a]>=p)
   p=b[a];
  } 
 }
  printf("\n largest no. among all elements in the array is %d ",p);
 
}
