#include<stdio.h>
void main()
{
  int i,arr[10],j,x,n;
  //Initially taking numbers from user
  printf("Enter the numbers: ");
  for(i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
  }
  
   printf("Enter the position where you want to insert new number: ");
   scanf("%d",&x);
   
   if(x<10)
   {
    j=x;
    for(;j<10;j++)
    {
     arr[j]=arr[j-1];
    }
    printf("Number inserted successfully");
   }
   else
   {
     printf("Position which you have entered is out of range \n");
   }
  
   //Displaying contents of array after insertion
    for(i=0;i<11;i++)
    {
     printf("%d\n",arr[i]);
    }
}
