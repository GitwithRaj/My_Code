#include<stdio.h>
int multi( int A1[][],int A2[][],int r1,int c1,int r2,int c2);
int main()
{
    int M1[10][10],M2[10][10];
     int i,j,r1,c1,r2,c2,result[10][10];
     printf("enter the row and column of the matrix 1:");
     scanf("%d\t%d",&r1,&c1);
     printf("enter the row and column of the matrix 2:");
     scanf("%d\t%d",&r2,&c2);
     if(c1==r2)
     {
       result[r1][c2]=multi(M1,M2,r1,c1,r2,c2);
       printf("the product is :");
       for(i=0;i<r1;i++)
       {
         for(j=0;j<c2;j++)
         {
           printf("%d",result[i][j]);
         }
       }
     }
     else
     {
         printf("for matrix multiplication there must be column of matrix 1 is equal to row of matrix 2\n");
     }

}
 int multi(int A1[][],int A2[][],int r1,int c1,int r2,int c2)
 {   int i,j,k,sum=0,M[10][10];
   printf("the product of the matrix is :\n");
    for(i=0;i<r1;i++)
     {
        for(j=0;j<c2;j++)
        {
           for(k=0;k<c1;k++)
           {
              sum+=A1[i][k]*A2[k][j];
           }
           M[i][j]=sum;
           sum=0;       
        }
    }
      for(i=0;i<r1;i++)
      {
          for(j=0;j<c2;j++)
          {
            printf("%d\t",M[i][j]);
          }
          printf("\n");
      }
      return M[r1][c2];
  }   
    
 