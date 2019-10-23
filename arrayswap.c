#include<stdio.h>
void main()
{
 int temp,a, b[10];
 printf("Enter the 10 number");
 for(a=0;a<10;a++)
 {
  scanf("%d",&b[a]);
 }printf("\n");
 printf("Numbers before swapping are ");
 for(a=0;a<10;a++)
 {
  printf("%d ",b[a]);
 }printf("\n");
  for(a=0;a<10;a=a+2)
 {
  temp=b[a];
  b[a]=b[a+1];
  b[a+1]=temp;
 }
  printf("Numbers after swapping are ");
  for(a=0;a<10;a++)
  {
   printf("%d  ",b[a]);
  }printf("\n");
}
