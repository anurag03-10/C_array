#include<stdio.h>
void main()
{
int i,arr[10],j,x,n;
printf("enter the numbes");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the position to delet");
scanf("%d",&x);
if(x<10)
{
for(j=x;j<10;j++)
{
arr[j]=arr[j+1];
}
}
else
printf("element not found");
for(i=0;i<9;i++)
{
printf("%d\n",arr[i]);
}
}
