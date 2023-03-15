#include <stdio.h>

int feature() {
  return 1;
}

int security() {
  return -1;
}

int main() {
  int t = feature() + security();
  printf("%d", t);
  
  return 0;
}