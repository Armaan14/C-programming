#include <stdio.h>

int main () {
  int x = 4;
  int y = 5;
  int z, m, n, o, p;
  z = x--;
  m = --z;
  n = y++;
  o = ++y;
  x = ++m;
  p = x++;

  printf("X: %d\nY: %d\nZ: %d\nM: %d\nN: %d\nO: %d\nP: %d\n", x, y, z, m, n, o, p);
  return 0;
}
