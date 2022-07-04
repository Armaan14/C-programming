#include<stdio.h>
int len,len1,cmp;
char x[100],y[100],z[100];



int findlength(char str[]){
int length=0;
while(str[length]!='\0'){
    length++;
}
return (length);
}
void addstring(char str[], char str1[]){
len=findlength(str);
len1=findlength(str1);
    for(int i = 0; i<len1; i++,len++)str[len] = str1[i];
}

int compare(char str[], char str1[]){
if(findlength(str)>findlength(str1))return 1;
else if(findlength(str)<findlength(str1))return -1;
else if(findlength(str)==findlength(str1))return 0;
}

void copystring(char str[],char str1[]){
for(int i=0; i<findlength(str); i++)str[i]=' ';
for(int i=0; i<findlength(str1); i++)str[i]=str1[i];
}

int main(){
printf("Enter a sentence: ");
scanf("%[^\n]",&x);
printf("Enter another sentence: ");
scanf("%s",&y);
compare(x,y);
printf("\nComparing string 1 to string 2: ");
cmp=compare(x,y);
if(cmp==0)printf("string 1 is equal in size to string 2");
else if(cmp==1)printf("string 1 is greater in size than string 2");
else if(cmp==-1)printf("string 1 is lesser in size than string 2");
printf("\n");
copystring(z,y);
printf("\nCopying string 2 to string 3: %s\n\n",z);
addstring(x,y);
printf("\nAdding string 2 to string 1: %s\n", x);
return 0;
}
