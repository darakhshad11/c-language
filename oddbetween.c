// odd between 5 to 50
#include<stdio.h>
int main()
{
    int n=50;
    for(int i=5; i<=n; i++)
    {
        if(i%2 != 0)
        {
            printf("%d\n",i);
        }
    }
}