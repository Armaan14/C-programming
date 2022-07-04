#include<stdio.h>
int m;
void month (int m) {
    if (m==1) printf ("january");
    if (m==2) printf ("february");
    if (m==3) printf ("march");
    if (m==4) printf ("april");
    if (m==5) printf ("may ");
    if (m==6) printf ("june ");
      if (m==7) printf ("july");
    if (m==8) printf ("august");
        if (m==9) printf ("sep");
    if (m==10) printf ("octobor");
    if (m==11) printf (" november");
    if (m==12) printf ("december ");
}
    int main ()
    {
        scanf ("%d",&m);
        month (m);
    }

