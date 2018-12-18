#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  int length;			/* n sayisi uzunluk */
  int s,i=0,a1,a2,k;
  char c,p[27];
  time_t t;
	srand((unsigned) time(&t));


  for(i=0; i<26; i++){
    p[i] = 'a'+i;
  }
  scanf("%d",&s );
  for(i=0;i<s;i++){
    scanf("%d %d",&a1,&a2 );

      for(k=0;k<a1;k++){
        int t = rand()+5124;
        printf("%c",p[t%a2] );
      }printf("\n" );


  // for(i=0;i<26;i++){
  //   printf("%c",p[i] );
  // }

  }
}
