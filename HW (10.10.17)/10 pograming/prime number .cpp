#include<stdio.h>
 int main ()
 {
    int divs =0;
    int num;
    scanf ("%d",& num);
    for (int i=2;i<num;i++)
    {
        if (num %i==0) divs ++ ;

    }
    if  (divs >0)
    {
        printf ("No prime \n");

    }
    else
    {
        printf ("prime \n");
    }
      return 0 ;
 }
