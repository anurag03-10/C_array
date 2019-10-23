#include<stdio.h>
void main()
{
 int g,a=0,c=0, b[5],s=0;
 
 printf("Enter numbers  ");
 for(;a<5;a++)
 {
  scanf("%d",&b[a]);
 } 
 printf("Enter the number to search");
 scanf("%d",&g);
 for(a=0;a<5;a++)
 {
 if(b[a]==g)
  {
  printf("\n Yes!! The no. %d is present in the array at location %d",g,a+1);
  c++; 
 }
 }
  if(c==0)
 printf("No!! The no. %d is not present in the array \n",g);

} 
