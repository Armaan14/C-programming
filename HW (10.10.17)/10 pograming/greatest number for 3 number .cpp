#include <stdio.h>
int main()
{
    int x, y,z ;

    printf("Enter three different numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if( x>=y && x>=z )
        printf("%d is the largest number.", x);

    else if( y>=x && y>=z )
        printf("%d is the largest number.", y);

    else
        printf("%d is the largest number.",z );

    return 0;
}
