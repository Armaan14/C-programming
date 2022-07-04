#include<stdio.h>
int yr;
int leap(int yr){
if(yr%100==0){
 if(yr%400==0)return 1;
 else return 0;
}
else if(yr%4==0)return 1;
else return 0;
}
int main(){
scanf("%d",&yr);
if(leap(yr)==1)printf("\n%d is a leap year",yr);
else printf("\n%d is not a leap year",yr);
return 0;
}
