#include<stdio.h>
int main ()
{
    int  x;
    int *y;
    x=5;
    printf ("%d",x);
    y=&x;
    printf ("%d",*y);
    x=8;
    printf ("%d",x);
    printf ("%x",y);
    printf ("%d",*y);
    return 0 ;


}
