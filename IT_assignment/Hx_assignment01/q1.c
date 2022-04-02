// Write a program to find the third largest no.from
// an array without sorting
#include<stdio.h>
int max(int B[],int x)
{int i,k,max=B[0];
    for(i=1;i<x;i++)
    {if(max<B[i])
     max=B[i];
    } return max;}
int main()
{ int A[10],i,k1,n;
    printf("enter the no. of element ");
    scanf("%d",&n);
    printf("enter the no,in the array:");
    for(i=0;i<n;i++)
    { scanf("%d",&A[i]); }
    int m,C[10];
    m=max(A,n);
    for(i=0;i<n;i++)
    { if(A[i]==m)
   {k1=i;
    break;} }
    printf("the first largest no. is %d\n",m); 
  for(i=0;i<n;i++)
    { if(i<k1)
       {C[i]=A[i]; }
       else{C[i]=A[i+1];}
    }for(i=0;i<n-1;i++)
    printf("%d\t",C[i]);
    int m2,k2,D[10];
    m2=max(C,n-1);
    for(i=0;i<n-1;i++)
    { if(C[i]==m2)
        { k2=i;
            break; }}
    printf("\nthe second largest value  is  %d\n",m2);
    for(i=0;i<n;i++)
   { if(i<k2){D[i]=C[i];}
     else{D[i]=C[i+1];}}
     for(i=0;i<n-2;i++)
     printf("%d\t",D[i]);
     int m3;
     m3=max(D,n-2);
     printf("\nthe third largest value is %d",m3);
}