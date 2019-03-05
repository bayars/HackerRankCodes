#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main(){
  char t,l,p=0;
  std::vector<char> v1;
  std::vector<char> v2;
  for(int i = 0 ; i<2;i++){
    std::cin >> l ;
    v1.push_back(l);
  }
  for(int i = 0; i < 10 ; i++){
    std::cin >> t ;
    v2.push_back(t);
  }
    for(int i = 0; i < 10 ; i++){
      for(int l = 0;l<2;l++){
        if(v2[i] == v1[l]){
          p=1;
          break;
        }}}
    if(p == 1) std::cout << "YES";
    else std::cout << "NO";
}
