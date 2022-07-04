#include <stdio.h>
int main () {
int a[2][2],b[2][2],sum[2][2], i, j;

printf ("Enter Matrix:");

printf ("Enter the matrix: A \n");
for (i=0;i<4;i++){
    for (j=0;j<2;j++) {
      scanf("%d",&a[i][j]);
    }
}
printf ("Enter the matrix: B \n");
for (i=0;i<4;i++){
    for (j=0;j<2;j++) {
      scanf ("%d",&b[i][j]);
    }
}
    printf ("sum matrix :");
for (i=0;i<4;i++) {
    for (j=0;j<2;j++) {
    sum[i][j]=a[i][j]+b[i][j];
    printf ("%d\t", sum[i][j]);
    }
    printf("\n");
}

  return 0;

}

