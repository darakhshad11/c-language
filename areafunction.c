#include<stdio.h>
int areasq(int side);
int areaci(float radius);
int areare(int a , int b);
int main()
{  
    int side,radius,a,b;
    printf("enter the vale of side,radius,a,b\n");
    scanf("%d %d",&side, &radius );
    scanf("%d %d",&a,&b);
     areasq( side);
    areaci( side);
    areare( a, b);
}
int areasq(int side)
{
  
    int area= side*side; 
    printf("%d\n",area);
}
int areaci(float side)
{
    int area= 3.14*side*side;
    printf("%d\n",area);
}
int areare(int a, int b)
{
 int area= a*b;
 printf("%d\n",area);
}
