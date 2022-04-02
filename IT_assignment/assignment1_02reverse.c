//to find the reverse of a string 
#include<stdio.h>
int main()
{
  int i,l;
  char A[20],B[20];
  printf("enter the string ");
  scanf("%s",A); 
    
    for(i=0;A[i]!='\0';i++)
    {
       l=l+1;
    }
    printf("the length of the string is %d\n",l);
  for(i=0;i<l;i++)
  {
    B[i]=A[l-i-1];
  }
     printf("the reverse of the string is %s",B);
}