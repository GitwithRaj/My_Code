#include<stdio.h>
int main()
{
    int i,l;
    char str[20];
    printf("enter the string ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
       l=l+1;
    }
    printf("the length of the string is %d",l);
}