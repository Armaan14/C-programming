#include<stdio.h>
int calculate (int a,int b);
int main (void)
{
    int n1,n2;
    printf("enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    calculate(n1,n2);
    return 0;
}
void calculate (int a,int b);{
printf("%d + %d = %d\n",a,b,a+b);
printf("%d - %d = %d\n",a,b,a-b);
printf("%d * %d = %d\n",a,b,a*b);
printf("%d / %d = %d\n",a,b,float (a/b);
}
