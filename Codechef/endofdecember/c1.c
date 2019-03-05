#include <stdio.h>

int main(){
  int i,number1[2];
  for(i=0;i<2;i++){
    scanf("%d",&number1[i]);
  }
  int number2[number1[0]];
  for(i=0;i<number1[0];i++){
    scanf("%d",&number2[i]);
    if(number1[1] < number2[i]){
      printf("Good boi\n");
    }else{
      printf("Bad boi\n");
    }
  }
}
