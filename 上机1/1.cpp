#include<stdio.h>
void main()
{ int a,b,c;
  printf("�������һ��������"); scanf("%d",&a);
  printf("������ڶ���������"); scanf("%d",&b);
  printf("a=%d,b=%d\n",a,b);
  c=a; a=b; b=c;
  printf("������\n");
  printf("a=%d,b=%d\n",a,b);
}