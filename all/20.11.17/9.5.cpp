#include<stdio.h>
int n,a=1,b=0,c=0;
void fibonacci(int x);

int main(){
printf("Enter the number of fibonacci numbers to be printed: ");
scanf("%d",&n);
fibonacci(n);
return 0;
}

void fibonacci(int x){
while(x--){
 printf("%d\n",a);
 b=c;
 c=a;
 a=b+c;
}
}
