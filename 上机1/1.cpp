#include<stdio.h>
void main()
{ int a,b,c;
  printf("请输入第一个整数："); scanf("%d",&a);
  printf("请输入第二个整数："); scanf("%d",&b);
  printf("a=%d,b=%d\n",a,b);
  c=a; a=b; b=c;
  printf("交换后：\n");
  printf("a=%d,b=%d\n",a,b);
}