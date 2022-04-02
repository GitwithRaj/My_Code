 #include<stdio.h>
 void main()
 {
     int count;
     char d,ch;
     printf("enter the character ");
     scanf("%c",&ch);
     FILE *p;
     p =fopen("rajkumar.txt","r");
     while(d!=EOF)
     {
         printf("%c",d);
         d=fgetc(p);
         if(d==ch)
         {
             count=count+1;
         }
        
     }
     printf("\nThe frequency of %c is %d",ch,count);
 }