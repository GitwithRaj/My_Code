//To find the third largest no. from an array without sorting
#include<stdio.h>
int main()
{
    int arr[10],i,j,l3,n;
    printf("enter the no. of element in the array ");
    scanf("%d",&n);
    printf("enter the no. in array ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                if(j!=n-1)
                { 
                    j++;
                  continue;
                }
                else
                {
                    printf(" the first largest no. is %d",arr[i]);
                    break;
                }
            }
            else
            {
                break;
    
            }
        }   
        
    }
}  