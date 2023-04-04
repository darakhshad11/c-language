#include<stdio.h>
void fun1();
void fun2();
int main()
{
 char country;
 printf("enter the charcter i or f\n");
 scanf("%c",&country);
 if(country == 'i')
{
    fun1();
}
else
{
    fun2();
}
}
void fun1()
{
    printf("namaste\n");
}
void fun2()
{
    printf("banjour\n");
}