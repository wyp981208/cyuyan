#include<stdio.h>

#include<ctype.h>

int main()

{int zm=0,sz=0,qt=0;

 char c;

 scanf("%c",&c);

 while(c!='?')

 {if(isalpha(c))zm++;

    else if(isdigit(c))sz++;

      else qt++;

   scanf("%c",&c);

 }   

 printf("×ÖÄ¸£º%d\nÊı×Ö£º%d\nÆäËü£º%d\n",zm,sz,qt);

 return 0;

}