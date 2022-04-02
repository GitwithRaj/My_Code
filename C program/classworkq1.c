#include<stdio.h>
int main()
{
    int A1[10][10],A2[10][10],M[10][10];
    int i,j,k,r,c,r2,c2,sum=0;
    printf("enter the rows and column for the matrix 1 :\n");
    scanf("%d\t%d",&r,&c);
    //for matrix multiplication column of first matrix is equal to row 2
    printf("enter the row and column in the second matrix :\n");
    scanf("%d\t%d",&r2,&c2);
    if(c!=r2)
    {
        printf("matrix canot be multiplied : there must be column of first matrix is equal to row of second matrix");
    }
    else
    {
    printf("enter the element in the matrix 1:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&A1[i][j]);
        }
    }
     printf("enter the element in the matrix 2:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&A2[i][j]);
        }
    }
    for(i=0;i<r;i++)
      {
          for(j=0;j<c;j++)
          {
            printf("%d\t",A1[i][j]);
          }
          printf("\n");
      }
        for(i=0;i<r2;i++)
      {
          for(j=0;j<c2;j++)
          {
            printf("%d\t",A2[i][j]);
          }
          printf("\n");
      }
        
    printf("the product of the matrix is :\n");
    for(i=0;i<r;i++)
     {
        for(j=0;j<c2;j++)
        {
           for(k=0;k<c;k++)
           {
              sum+=A1[i][k]*A2[k][j];
           }
           M[i][j]=sum;
           sum=0;       
        }
    }
      for(i=0;i<r;i++)
      {
          for(j=0;j<c2;j++)
          {
            printf("%d\t",M[i][j]);
          }
          printf("\n");
      }
    }   
    

}