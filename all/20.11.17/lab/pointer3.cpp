#include <stdio.h>
int main ()
{
    int x=5;
    int *y=&x;
    int z=6;
    int *a=&z;
    int c=7;
    int *b=c;

    printf ("%d",c );
    printf ("%x",*b);
    printf ("%d\n",x);
    printf ("%d\n",z);
    printf ("%d\n ",*y);
    printf ("%d\n",a);
    return 0;

}
