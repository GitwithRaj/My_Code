#include<stdio.h>
void main()
{
int A[10],x,p,i,n;
printf("enter the no. of element in array ");
scanf("%d",&n);
printf("enter the no. in array ");

for(i=0;i<=n;i++)
{
    scanf("%d ",&A[i]);
}

printf("enter the no.for inserting");
scanf("%d\n",&x);
printf("enter the position for insertion");
scanf("%d\n",&p); 
for(i=n;i>=p;i--)
{
  A[i+1]=A[i];  
}
  A[p]=x;
  printf("the series after the insertion is ");
  for(i=0;i<=n+1;i++)
  {
      printf("%d\t",A[i]);
  }
}