#include<stdio.h>
void main()
{
FILE *ptr;
ptr=fopen("table.txt","w");
int i,n;
printf("enter the no for table ");
scanf("%d",&n);
fprintf(ptr,"the table of %d is ready\n",n);
for(i=0;i<10;i++)
{
    fprintf(ptr,"%dX%d=%d\n",n,i+1,n*(i+1));
}
//go to table.txt file to check the written table
}