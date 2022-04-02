// write a to represent a sparse matrix of order nxn
//  eficient way in respect of space
#include<stdio.h>
int main()
{
   short int A[10][10],i,j,n,x;
    printf("enter the value of n:");
    scanf("%d",&n);
    // sparse matrix are those matrix having more than half of the element "0"
   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {   
        x=0;
        A[i][j]=x;
        printf("%d\t",A[j][j]);
    }
    printf("\n"); 
   }


}

