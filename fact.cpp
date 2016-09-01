#include<stdio.h>
void main()
{
int a,fact=1;
printf("enter num");
scanf("%d",&a);
while(a!=0)
{
fact=a*fact;
a--;
}
printf("%d",fact);
}
