#include<stdio.h>
void main()
{
 int a=0, b[10];
 printf("Enter 10 numbers  \n");
 for(;a<10;a++)
 {
  scanf("%d",&b[a]);
 } 
 printf("Numbers in reverse order are \n ");
 for(a=9;a>0;a--)
 {
  printf("%d ",b[a]);
 }
}
