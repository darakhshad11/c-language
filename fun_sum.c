#include<stdio.h>
int sum(int a, int b);
int main()
{
int a,b;
printf("enter the vale of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
 int s=sum(a, b);
printf("%d",s);
}
int sum(int x, int y)
{
    return x+y;
}