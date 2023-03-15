#include <stdio.h>

int feature() {
  return 1;
}

int feature1() {
  return 2;
}

int feature2() {
  return 3;
}
int security() {
  return -1;
}

int main() {
  int t = feature() + security() + feature1() + feature2();
  printf("%d", t);
  
  return 0;
}