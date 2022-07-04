#include <stdio.h>
int main ()
{
int num;
printf("Enter your mark ");
scanf("%d",&num);
printf(" You entered %d", num);

if(num >= 80){
printf(" You got A grade");
}
else if ( num >=60){

printf(" You got B grade");
}
else if ( num >=40){
printf(" You got C grade");
}

else if ( num < 40){
printf(" You Failed in this exam");
}
return 0;
}
