#include<stdio.h>
void main()
{
 int a, b[10],s=0,c=0;
 printf("Enter 10 numbers  ");
 for(a=0;a<10;a++)
 {
  scanf("%d",&b[a]); 
 }
 printf("odd numbers present in the array are \n  ");
 for(a=0;a<10;a++)
 {
  if(b[a]%2==1)
  { 
  printf("%d  ",b[a]);
  c++;
  s=s+b[a]; 
  }
 }
  printf("\n Sum of odd numbers in the array is %d \n",s);
  printf("\n Total number of odd nos. in the array are %d \n",c); 
}
