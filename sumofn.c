#include<stdio.h>
int main()
{
    int i,n, sum=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(int i=0  ; i<=n; i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("%d\n",sum);
}