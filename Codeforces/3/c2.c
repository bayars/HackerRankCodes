#include <stdio.h>

int main(){
  int i,a[2];
  for(i=0;i<2;i++){
    scanf("%d",&a[i]);
  }
  for(i =1; i<1000000;i++){
    if((i/a[1]) * (i % a[1]) == a[0]){
      printf("%d",i);
      break;
    }
  }

}
