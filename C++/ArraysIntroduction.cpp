// An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding an index to a unique identifier.

// Declaration:

// int arr[10]; //Declares an array named arr of size 10, i.e; you can store 10 integers.

// Accessing elements of an array:

// Indexing in arrays starts from 0.So the first element is stored at arr[0],the second element at arr[1]...arr[9]

// You'll be given an array of integers and you have to print the integers in the reverse order.

// Input Format

// The first line of the input contains ,where is the number of integers.The next line contains integers separated by a space.

// Constraints

// , where is the integer in the array.

// Output Format

// Print the integers of the array in the reverse order in a single line separated by a space.

// Sample Input

// 4
// 1 4 3 2

// Sample Output

// 2 3 4 1


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int limit,temp;
    cin >> limit;
    int a[limit];
    int l[limit];
    for(int i=0;i<limit;i++){
        cin >> a[i];
    }
    for (int i = 0; i < limit/2; ++i) {
    temp = a[limit-i-1];
    a[limit-i-1] = a[i];
    a[i] = temp;
}
    for (int i = 0; i < limit; ++i) {
    cout << a[i] << " ";
}
//     for(int m=0;m<limit;m++){
//     for(int t=limit;0<=t;--t){
//             l[m]=a[t];
//     }  }
  
//     // for(int i=0;i<limit;i++){
//     //     cout << l[i];
//     // }
    //cout << l[0];
    return 0;
}
