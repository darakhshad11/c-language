#include<stdio.h>
int main()
{
    int number,factorial=1;
    printf("enter number\n");
    scanf("%d",&number);
    for(int i =number ; i>=1; i--)
    {
        factorial=factorial*i;
    }
    printf("%d\n",factorial);
}