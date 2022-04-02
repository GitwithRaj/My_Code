#include<stdio.h>
int main()
{
int n,result;
printf("enter the no. for finding the factorial ");
scanf("%d",&n);
result=fac(n);
printf("the factorial of the no, is %d",result);
}

int fac(int x)
{
  int res;
  if(x==0)
  {
      res=1;
  }
  else
  {
      res=x*fac(x-1);
  }
    return(res);
}


