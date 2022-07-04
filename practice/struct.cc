#include <stdio.h>

struct maiya {
  char name[250];
  int boobs;
};

int main (void) {
  maiya group[5];
  for (int i = 0; i < 5; i++) {
    printf("Enter name of Maiya %d: ", i);
    scanf("%s", group[i].name);
    printf("Enter boobs size of Maiya %d: ", i);
    scanf("%d", &group[i].boobs);
  }
  for (int i = 0; i < 5; i++) {
    printf("Maiya %d's name is \"%s\", boobs size: %d\n",
           i, group[i].name, group[i].boobs);
  }
  return 0;
}
