#include<stdio.h>
int main () {

    for (int i=0;i<20;i++) {
    for (int j=0;j<i; j++) {
            printf ("%d ",i+j-1);

    }
    printf (" * ");
    }

    return 0 ;


    }

