#include<stdio.h>
#include<time.h>

int main()
{
    int i;
    double difftime(time_t time2,time_t time1);
    time_t start,end;
    // for(i=0;i<5000;i++)
    start=time(NULL);
    for(i=0;i<5000;i++)
     {
         printf("*");
         printf("#$");
     }
        end=time(NULL);
    printf("\nthe for loop %f second",difftime(end,start));

}