#include<stdio.h>
#include<math.h>
float x;
int main(){
scanf("%f",&x);
x=roundf(x*100)/100;
printf("%1.2f",x);
return 0;
}
