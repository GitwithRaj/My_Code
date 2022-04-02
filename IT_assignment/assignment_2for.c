#include<stdio.h>
int main()
{
   int n,i,fac=1;
 printf("enter the  positive no. for finding the factorial ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
    fac=fac*i;
 }
   printf("the factorial of the no.is %d",fac);
}
