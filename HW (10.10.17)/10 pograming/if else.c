#include<stdio.h>
int main ()
{
    int number ;
    printf ("inter tha integer :");
    scanf ("%d",&number);
    if (number %2==0)
        printf ("%d in even", number);

    else
       printf ("%d is odd ", number );
    return 0 ;
}
