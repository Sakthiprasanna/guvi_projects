*include<stdio.h>
void main()
{
int a,rev;
printf("enter num");
scanf("%d",&a);
while(a!=0)
{
rev=a%10;
a=a/10;
printf("%d",rev);
}
}
