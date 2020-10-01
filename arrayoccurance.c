#include<stdio.h>
void main()
{
 int g,a,c=0, b[5];
 
 printf("Enter numbers  ");
 for(a=0;a<5;a++)
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
 if(c==0)
 {
  printf("The no. %d hasn't occured in the array \n",g);
 }
 else
 {
   printf("The no. %d occured in the array for %d times \n",g,c);
 }
}
