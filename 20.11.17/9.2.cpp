#include<stdio.h>
int spc;
void space(int x);
int main(){
while(1){
    printf("Enter the number of spaces between \"1\" and \"2\"\n");
    scanf("%d",&spc);
    printf("1");
    space(spc);
    printf("2\n");
}
}
void space(int x){
for(int i=0; i<x; i++)printf(" ");
}
