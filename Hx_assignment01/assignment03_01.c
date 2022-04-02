#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void push(int a[SIZE]);
void pop(int a[SIZE]);
void display(int a[SIZE]);
void sort(int a[SIZE]);
int top=-1,top1=-1,s2[SIZE],s3[SIZE];
int main()
{
    int ch,i,s1[SIZE];
     printf("\n1 for push\n2 for pop\n 3 for display\n 4 for exit\n5 for sort\n");
    while(1)
    {
       printf("enter your choice ");
       scanf("%d",&ch);
       switch(ch)
      {
          case 1:
          {
              push(s1);
              break;
          }
          case 2:
          {
              pop(s1);
              break;
          }
          case 3:
          {
              display(s1);
              break;
          }
          case 4:
          {
              exit (0);
          }
          case 5:
          {
              sort(s1);
              break;
          }
          default:
          {
          printf("wrong choice\n");
          }
      }
    }
}
void push(int a[SIZE])
{   int i,n;
    if(top==SIZE-1)
    printf("the stack is full or over flow condition\n");
    else 
    {
    printf("enter the element to be pushed:");
    scanf("%d",&n);
    top++;
    a[top]=n;
    }
}
void pop(int a[SIZE])
{   
    if(top==-1)
    printf("underflow condition \n");
    else
    {
    printf("the poped element is %d\n",a[top]);
    top--;
    }
}
void display(int a[SIZE])
{    int i;
    if(top==-1)
    printf("stack is empty \n");
    else
    {   printf("the original stack is \n");
         for(i=top;i>=0;i--)
        printf("\n%d\n",a[i]);
    }
}
void sort(int a[SIZE])
{   int temp,temp1,i;
  while(top!=-1)
{
   if(top1==-1)
    {
       top1++;
      s2[top1]=a[top];
      top--;
    }
    else if(s2[top1]>a[top])
    {
        temp=s2[top1];
        top1--;
        if(top1==-1)
        {
            top1++;
            s2[top1]=a[top];
            a[top]=temp;
        }
        else
        { temp1=a[top];
        a[top]=temp;
        top++;
        a[top]=temp1;
        }
    }
    else if(s2[top1]<a[top])
    {
        top1++;
        s2[top1]=a[top];
        top--;
    }else
    top--;
}
printf("the sorted stack is :\n ");
for(i=0;i<=top1;i++)
printf("\n%d\n",s2[i]);
}




