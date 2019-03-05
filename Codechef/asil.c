#include <stdio.h>

int main(){
  int i,t,z=423;
  for(i=0;i<z;i++){
    scanf("%d\n",&t );
    if(t == 42){
      z=i;
    }else{
      printf("%d\n",t );
    }
  }

}
