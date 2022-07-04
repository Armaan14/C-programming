#include<stdio.h>
#include<string.h>
char str[100],c;
int find1(char str1[], char y){
int len = strlen(str1);
for(int i=0; i<len; i++)if(str1[i]==y)return 1;
return 0;
}
int main(){
printf("Enter a sentence: ");
scanf("%[^\n]", &str);
printf("Enter a character to check its presence in the string: ");
scanf(" %c", &c);
printf("%d",find1(str, c));
}
