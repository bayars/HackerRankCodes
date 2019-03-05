#include <iostream>
#include <vector>
#include <string>
#include <sstream>


int main(){
  std::string input = "";
  std::vector<char> v;
  getline(  std::cin,input);
//  std::cout << input;
    for(int i = 0 ; i< input.size();i++){
      v.push_back(input[i]);
}
// for(int i = 0 ; i< input.size();i++){
//   std::cout << v[i];
// }
  //for(int i = 0 ; i< input.size();i++){
    // v.insert
    input[input.size()-1] = input[0];
    input[input.size()-3] = input[1];
    std::cout << input << "\n";
    // if(i %2 == 0){
    //   v.push_back(input[i]);
    // }else{
    //   v.insert(v.begin(), input[i]);
    // }
  // }
    for(int i = v.size() ; i>= 0;i--){
      std::cout << v[i]  ;
    }std::cout << '\n';

}
