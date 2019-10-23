#include<stdio.h>
void main()
{
 int a[10], b=0;
 printf("Enter numbers  ");
 for(;b<15;b++)
 {
  scanf("%d",&a[b]);
 } 
 printf("EVEN Numbers are  \n");
 for(b=0;b<15;b++)
 {
  if (a[b]%2==0)
  printf("%d ",a[b]);
 } 
  printf("\n ODD Numbers are  \n");
 for(b=0;b<15;b++)
 {
  if (a[b]%2==1)
  printf("%d ",a[b]);
 }
}
