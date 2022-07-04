#include<stdio.h>
#include<math.h>
int x,n;
long int polynomial(int ab[], int a, int b);

int main(){
printf("P=(...(((a0x+a1)x+a2)x+a3)x+...+an)\n\nEnter the values of x and n:\n");
scanf("%d%d",&x,&n);
int an[n];
printf("Enter the values of a0 to a%d:\n",n);
for(int i=0; i<=n; i++){
printf("%d.\t",i);
scanf("%d",&an[i]);
}
printf("P = %li", polynomial(an,x,n));
return 0;
}

long int polynomial(int ab[], int a, int b){
long int p=0;
for(int k=0; k<=b; k++){
    p=p+(ab[b-k])*((pow(a,(k))));
}
return (p);
}


