//to generate the random no.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num;
    srand(time(0));
    // num=rand()%10;//to generate the no.from 0 to 9
   num=rand()%100;//to generate the no.from 0 to 99
//    num=rand();//to generate the any no.
    printf("the number is %d",num);
}