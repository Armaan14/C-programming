#include <stdio.h>
int main ()
{
    int sum =0;
    int c=11;
    do
    {
        sum +=c;
        c+=2;

    }
    while (c<101);
    printf ("Tha sum number of all odd numbers till 100 is %d \n",sum );
    return 0;
}
