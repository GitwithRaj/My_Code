#include<stdio.h>
int main()
{
  int i,l;
  char C[20],D[20];
  printf("enter the string to check whether string is pallindrome or not: ");
  scanf("%s",C);
  for(i=0;C[i]!='\0';i++)
  {
      l=l+1;
  }
   for(i=0;i<l;i++)
   {
     D[i]=C[l-i-1];
   }
   printf("the reverse of the string is %s\n",D);
   int flag;
    for(i=0;i<l;i++)
    {
     if(C[i]==D[i])
     {
         flag=1;
         continue;
     }
       else
       {
           flag=0;
           break;
       }
    }
      if(flag==1)
     {
       printf("the string is pallindrome ");
     }
      else
      {
        printf("the string is not a pallindrme ");

      }
}