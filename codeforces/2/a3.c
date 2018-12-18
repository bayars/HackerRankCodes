#include <stdio.h>
#include <math.h>

int main(){
  int n,i,sum1=0,sum2=0;
  int a[n];
  scanf("%d",&n);
  if(n%2 == 0){
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++){
      sum1 = sum1 + a[i];
    }
    for(i=n/2;i<n;i++){
      sum2 = sum2 + a[i];
    }
    int sum3=sum1-sum2;
    if(sum3<0){
     sum3=-sum3;
    }
    printf("%d\n",sum3 );
  }
}
