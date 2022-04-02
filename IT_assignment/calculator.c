#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,ch,result;
    printf("1. add\n2.subtract\n3.multiply\n4.division\n5.exit");
    printf("\nenter the two numbers :");
    scanf("%d %d",&a,&b);
    
    while(1)
    {
        printf("enter your choice :");
    scanf("%d",&ch);
        switch(ch)
        {
        case 1:
        {
            result=a+b;
            printf("the result is %d\n",result);
            break;   
        }
        case 2:
        {
          result=a-b;
            printf("the result is %d\n ",result);
            break;
        }
        case 3:
        {
           result=a*b;
            printf("the result is %d\n ",result);
            break;
        }
        case 4:
        {
             result=a/b;
            printf("the result is %d\n ",result);
            break;
        }
        case 5:
        {
            exit (0);
        }
        default :
        {
            printf("wrong choice ");
            break;
        }
      }
    }


}