#include <stdio.h>
int main () {
int a[3][3],b[3][3],sum[3][3],i,j;
printf("Enter the matrix: ");
{
    printf("Enter the matrix: A \n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
                scanf("%d",&a[i][j]);


        }
    }
}
{
    printf("Enter the matrix: B \n");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
                scanf("%d",&b[i][j]);


        }
    }
}
printf("Enter the sum matrix:");
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
                 sum[i][j]=a[i][j]+b[i][j];
                printf("%d\t", sum[i][j]);

}

printf("\n");
}
return 0;
}
