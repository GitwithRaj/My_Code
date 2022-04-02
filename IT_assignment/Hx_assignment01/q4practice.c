// write a C program to find the frequency of the character in the 
// text given in the __FILE__
#include<stdio.h>
void main()
{
    int i, PIN;
     FILE *ptr;
   ptr =fopen("raj.txt","r");
//    fclose(ptr);
//     fscanf(ptr,"%d",&PIN);
//     fclose(ptr);
    // printf("the value of the PIN is %d\n",PIN);
    //  for(i=0;i<12;i++)
    //  {
        //  printf("the character is %c\n",fgetc(ptr));
    //  }

    //  fclose(ptr);
    //    ptr=fopen("raj.txt","w");
    //    putc('r',ptr);
//     ptr=fopen("raj.txt","r");
    char c;
//     c=fgetc(ptr);
    while(c!=EOF)
    {
        printf("%c",c);
        c=fgetc(ptr);
    }
}    