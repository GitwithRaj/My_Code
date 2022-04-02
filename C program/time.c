#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i;
    for(i=0;i<39503087;i++);
    int ticks=clock();
    printf("%f\n",(float)ticks);
}