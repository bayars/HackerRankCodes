#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;


int main() {
    int a[3];
    for(int k = 0 ; k < 3 ;k++){
      std::cin >> a[k];
    }
    int s=0;
    for(int i =0;i<a[0];i++){
      for(int l=0;l<a[1]+1;l++){
        for(int m=0;m<a[2]+1;m++){
          if(i+1 == l && l+1==m){
            s = i+l+m;
          }
        }
      }
    }
    std::cout << s;

  return 0;
}
