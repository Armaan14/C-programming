#include<stdio.h>
int k;
int isprime(int x){
for(int i=2; i*i<=x; i++)if(x%i==0)return 0;
return 1;
}
int main(){
scanf("%d",&k);
printf("\n%d",isprime(k));
return 0;
}
