#include<stdio.h>
void main()
{
 int a=0, b[5],s=0;
 printf("Enter 5 numbers  ");
 for(;a<=4;a++)
 {
  scanf("%d",&b[a]);
  s=s+b[a]; 
 }
  printf("\n Sum of elements in the array is %d ",s);
 
}
