#include<stdio.h>
int main()
{
    int n =5;
    for(int i=1; i<=n; i++)
    {
        if(i==3)
        {
            continue;
        }
        printf("%d\n",i);
    }
}