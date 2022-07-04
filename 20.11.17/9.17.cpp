#include<stdio.h>
#include<string.h>
char str1[100],str2[100];
int m,len,len1;

void locate(char str1[], char str2[], int n){
len=strlen(str1);
len1=strlen(str2);
int lenx=len+len1;
for(int i=len; i>=n; i--,lenx--){
    str1[lenx]=str1[i];
    str1[i]=' ';
}
for(int i=n,j=0; i<len1+n, j<len1; j++,i++)str1[i]=str2[j];
}

int main(){
printf("Enter a sentence: ");
scanf("%s",&str1);
printf("\nEnter a word: ");
scanf("%s",&str2);
printf("\nEnter the index number to insert the word into the sentence: ");
scanf("%d",&m);
locate(str1,str2,(m-1));
printf("\n%s",str1);
return 0;
}
