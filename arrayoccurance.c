#include<stdio.h>
void main()
{
 int g,a=0,c=0, b[5];
 
 printf("Enter numbers  ");
 for(;a<5;a++)
 {
  scanf("%d",&b[a]);
 } 
 printf("Enter the number to search its occurance");
 scanf("%d",&g);
 for(a=0;a<5;a++)
 {
 if(b[a]==g)
  {
  c++; 
 }
 }
  printf("The no. %d occured in the array for %d times ",g,c);

} 
