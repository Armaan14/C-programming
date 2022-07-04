#include<stdio.h>
int main ()
{
    int m,n,c,d,first [10][10],second [10][10], sum [10][10];
    printf ("enter the number of rows and callams of matrix : \n");
    scanf ("%d%d",&m,&n);

    printf ("enter tha elements of first matrix : \n");
    for (c=0;c<m;c++)
      for (d=0;d<n;d++)
      scanf ("%d",&first [c][d]);

     printf ("enter tha elemnets of second matrix : \n");

    for (c=0;c<m;c++)
      for (d=0;d<n;d++)
      scanf ("%d",&first [c][d]);

      printf ("sum of entered matlrices:-\n");
      for (c=0;c<m;c++) {
      for (d=0;d<n;d++){
      scanf ("%d",&first [c][d]);

      sum[c][d]= first [c][d] + second [c][d] ;

    printf ("%d \t",sum [c][d]);
      }
        printf (" \n");
        }

        return 0;

}
