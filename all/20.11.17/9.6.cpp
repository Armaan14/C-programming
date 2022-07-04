#include<stdio.h>
#include<math.h>
float k,x;
float round(float y,float l);
int main(){
scanf("%f",&x);
printf("Indicate decimal places to round off: ");
scanf("%f",&k);
x = round(x,k);
printf("%f",x);
}
float round(float y,float l){
return (round(y*(pow(10,l)))/(pow(10,l)));
}


