#include<stdio.h>
#include<string.h>
int m;
void month(int m){
if(m==1)printf("January");
if(m==2)printf("February");
if(m==3)printf("March");
if(m==4)printf("April");
if(m==5)printf("May");
if(m==6)printf("June");
if(m==7)printf("July");
if(m==8)printf("August");
if(m==9)printf("September");
if(m==10)printf("October");
if(m==11)printf("November");
if(m==12)printf("December");
}
int main(){
scanf("%d",&m);
month(m);
}
