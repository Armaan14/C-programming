#include <stdio.h>
int main (){
for (int i=0; i<10; i++) {

        int sp =9-i ;
        int st =i+1 ;
        for (int j=0; j<st; j++) printf (" ");
      for ( int k=0; k<sp; k++) printf ("* ");

        printf ("\n");
}
for (int i=0; i<10; i++) {

        int sp =i+1 ;
        int st =9-i;
        for (int j=0; j<st; j++) printf (" ");
      for ( int k=0; k<sp; k++) printf ("* ");

        printf ("\n");

}

return 0 ;
}

