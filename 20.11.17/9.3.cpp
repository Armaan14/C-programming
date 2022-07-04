#include<Stdio.h>
#include<math.h>
long int x,n,facto=0,power=0,factorial1=0;
float fx=0;
bool npve=true;
long int factorial(long int a);
float function1(int xa, int na);

int main(){
printf("f(x)= x - x^3/3! + x^5/5! - x^7/7! + ...\n\nEnter x and n:\n");
scanf("%li%li",&x,&n);
printf("f(x) = %f", function1(x,n));
return 0;
}

float function1(int xa, int na){
for(int i=1; i<=na; i++){
   power = 2*(i)-1;
   factorial1 = factorial(power);
   if(npve){
    fx = fx+(pow(xa,power)/factorial1);
    npve=false;
   }
   else if (npve==false){
       fx = fx-(pow(xa,power)/factorial1);
       npve=true;
   }
 }
 return(fx);
}

long int factorial(long int a){
if(a==1 || a==0)return (1);
else facto=a*factorial(a-1);
return (facto);
}
