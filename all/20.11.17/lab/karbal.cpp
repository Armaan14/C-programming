#include<stdio.h>
int main() {
int hello [5];
int i ;

printf ("Normal Way:\n");
for (i=0;i<5;i++){
    scanf ("%d",&hello[i]);

   printf ("%d \n",hello[i]);
}


int *p;
p = hello;

printf ("\nPrint through address 0:\n");
for (i=0;i<5;i++)
  {
       printf ("%d",*(p+i));
  }

p = &hello [2];
printf ("Print through address 2:\n");
for (i=0;i<5;i++)
   {

        printf ("%d\n",*(p+i));
   }

  printf ("By increment:\n");
for (i=0;i<5;i++)
  {
    printf ("%d\n",*p+i);

    printf ("%d\n",*p++);
  }

return 0;
}
