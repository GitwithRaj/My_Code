#include<stdio.h>
int main()
{
    int a,i;
    char b;//can take value upto 255 because of ASCII value
    // printf("enter the value of b:");
    // scanf("%c",&b);
    printf("the list of the ascii value\n");
for(i=1;i<255;i++)
{   b=i;
    printf(" %d %c\t",i,b);
 }
  // a=sizeof(b);
    // printf("%d",a);
}