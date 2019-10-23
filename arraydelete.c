#include<stdio.h>
void main()
{
 int g,a=0,c=0, b[10];
 
 printf("Enter numbers  \n");
 for(;a<10;a++)
 {
  scanf("%d",&b[a]);
 } 
 printf("Enter the cell number to delete  \n");
 scanf("%d",&g);
 printf("Array after deletion of that cell is  \n");
 for(a=0;a<10;a++)
 {
  if(a!=g)
  {
   printf("%d  ",b[a]);
  }
 } 
}    

