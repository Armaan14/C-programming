#include<stdio.h>
int x,y;
void switch1(int xy,int yx){
y=xy;
x=yx;
}
int main(){
scanf("%d%d",&x,&y);
printf("\nOriginal: x=%d, y=%d",x,y);
switch1(x,y);
printf("\nSwitched: x=%d, y=%d",x,y);
return 0;
}
