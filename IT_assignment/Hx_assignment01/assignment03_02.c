#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void sort(int a[SIZE]);
void sort1(int S[20]);
int  P[SIZE],i,P1[20];
int main()
{
    int s1[SIZE],s2[SIZE],s3[SIZE],S[20],ch,j,k=0;
    printf("enter the element in the stack1 :");
    for(i=0;i<SIZE;i++)
    scanf("%d",&s1[i]);
    printf("enter the element in the stack2 :");
    for(i=0;i<SIZE;i++)
    scanf("%d",&s2[i]);
    printf("enter the element in the stack3 :");
    for(i=0;i<SIZE;i++)
    scanf("%d",&s3[i]);
     for(j=0;j<5;j++)
    {
       S[k]=s1[j];
       k++;
    }
     for(j=0;j<5;j++)
    {
       S[k]=s2[j];
       k++;
    } 
    for(j=0;j<5;j++)
    {
       S[k]=s3[j];
       k++;
    }
    printf("1 for sort the s1 stack\n2 for sort the s2 stack\n3 for sort the s3 stack\n 4 for merge and sort all the three stack \n5 for exit \n");
    while(1)
    {     printf("enter your choice :");
          scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                printf("the sorted s1 is:\n");
                sort(s1);
                break;
            }
            case 2:
            { 
                printf("the sorted s2 is:\n");
                sort(s2);
                break;
            }
            case 3:
            {  
                printf("the sorted s3 is:\n");
                sort(s3);
                break;
            }
            case 4:
            {   
                printf("Merge and sorted all the three stack:\n");
                sort1(S);
                break;
            }
            case 5:
            {
                exit (0);
            }
        }
    }
}
void sort(int a[SIZE])
{   int temp,top1=-1,top=SIZE-1,temp1;
  while(top!=-1)
{  
   if(top1==-1)
    {
       top1++;
      P[top1]=a[top];
      top--;
    }
    else if(P[top1]>a[top])
    {
        temp=P[top1];
        top1--;
        if(top1==-1)
        {
            top1++;
            P[top1]=a[top];
            a[top]=temp;
        }
        else
        { temp1=a[top];
        a[top]=temp;
        top++;
        a[top]=temp1;
        }
    }
    else if(P[top1]<a[top])
    {
        top1++;
        P[top1]=a[top];
        top--;
    }else
    top--;
}
for(i=0;i<=top1;i++)
printf("%d\n",P[i]);
}
void sort1(int S[20])
{   int temp,top1=-1,top=14,temp1;
  while(top!=-1)
{  
   if(top1==-1)
    {
       top1++;
      P1[top1]=  S[top];
      top--;
    }
    else if(P1[top1]>S[top])
    {
        temp=P1[top1];
        top1--;
        if(top1==-1)
        {
            top1++;
            P1[top1]=S[top];
            S[top]=temp;
        }
        else
        { temp1=S[top];
        S[top]=temp;
        top++;
        S[top]=temp1;
        }
    }
    else if(P1[top1]<S[top])
    {
        top1++;
        P1[top1]=S[top];
        top--;
    }else
    top--;
}
for(i=0;i<=top1;i++)
printf("%d\n",P1[i]);
}



