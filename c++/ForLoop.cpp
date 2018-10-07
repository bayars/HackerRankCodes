// A for loop is a programming language statement which allows code to be repeatedly executed.

// The syntax for this is

// for ( <expression_1> ; <expression_2> ; <expression_3> )
//     <statement>

//     expression_1 is used for intializing variables which are generally used for controlling terminating flag for the loop.
//     expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
//     expression_3 is generally used to update the flags/variables.

// A sample loop will be

// for(int i = 0; i < 10; i++) {
//     ...
// }

// Input Format

// You will be given two positive integers, and (), separated by a newline.

// Output Format

// For each integer in the interval :

//     If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
//     Else if and it is an even number, then print "even".
//     Else if and it is an odd number, then print "odd".

// Note:

// Sample Input

// 8
// 11

// Sample Output

// eight
// nine
// even
// odd


#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
    int n=0;
    cin >> a >> b;
    string z[9]={"one","two","three","four","five","six","seven","eight","nine"};
    if (a <= 9 && b <= 9 ){
        for(n=a;n<=b;n++){
            cout << z[n-1] << endl;
        }
    }else if( a <= 9 && b > 9){
        for(n=a;n<=9;n++){
            cout << z[n-1] << endl;
        }
                for(n=10;n<=b;n++){    
            if (n%2==0){
                cout<<"even"<<endl;
            }
             else {
                 cout<<"odd"<<endl;
             }
         }
    }

    return 0;
}
