#include <stdio.h>

int main(){

  int a[5]={4,5,61,2,4};
  size_t n = sizeof(a)/sizeof(a[0]);
  printf("%d",n);
}
