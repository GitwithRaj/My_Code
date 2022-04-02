#include<stdio.h>
int main()
{
    int arr[20],i,j,t,n;
    printf("enter the no. of element in the array  ");
    scanf("%d",&n);
    printf("enter the no, in the array ");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("the reverse of the array is  ");
   i=0;
   j=n-1;
   while(i<j)
   {  t=arr[i];
     arr[i]=arr[j];
     arr[j]=t;
     i++;
     j--; } 
     {
}
     for(j=0;j<n;j++)
     {
       printf("%d ",arr[j]);

     }
}