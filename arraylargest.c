#include<stdio.h>
void main()
{
 int g,a=0, b[10],s=0,p=-32765;
 printf("Enter the total number");
 scanf("%d",&g);
 printf("Enter %d numbers  ",g);
 
 for(;a<g;a++)
 {
  scanf("%d",&b[a]);
  if(b[a]>=p)
  p=b[a];
 }
  printf("\n largest no. among all elements in the array is %d ",p);
 
}
