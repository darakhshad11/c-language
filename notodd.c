// if we enter odd then loop break.
#include<stdio.h>
int main()
// {
//     int n;
//     do
//     {   
//         scanf("%d",&n);
//         printf("the number will be %d\n",n);
//         if(n % 2 != 0)
//         {
//             break;
//         }
//     }
//     while (1);
//     return 0;
// }
{
    int n; 
    do{
        scanf("%d",&n);
        printf("the number will be %d\n",n);
        if(n%7==0)
        {
            break;
        }

    }
    while (1);
    
    
}