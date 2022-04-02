#include<stdio.h>
#define LOSS(a,b) (a-b)
#define PROFIT(a,b) (b-a)
void main()
{
int a,b,l,p;
printf("enter the cost price ");
scanf("%d",&a);
printf("enter the selling price ");
scanf("%d",&b);
l=LOSS(a,b);
if(l>=0)
{
printf("the loss is %d",l);
}
else
{
    p=PROFIT(a,b);
    printf("the profit is %d",p);
}
}