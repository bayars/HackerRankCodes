/*

Problem link: https://www.hackerrank.com/challenges/vector-erase/problem?h_r=next-challenge&h_v=zen

You are provided with a vector of integers. Then, you are given queries. For the first query, you are provided with integer, which denotes a position in the vector. The value at this position in the vector needs to be erased. The next query consists of

integers denoting a range of the positions in the vector. The elements which fall under that range should be removed. The second query is performed on the updated vector which we get after performing the first query.
The following are some useful vector functions:

    erase(int position):

    Removes the element present at position.  
    Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)

    erase(int start,int end):

    Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
    Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)

Input Format

The first line of the input contains an integer
.The next line contains space separated integers(1-based index).The third line contains a single integer ,denoting the position of an element that should be removed from the vector.The fourth line contains two integers and

denoting the range that should be erased from the vector inclusive of a and exclusive of b.

Constraints


Output Format

Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second line separated by space.

Sample Input

6
1 4 6 2 8 9
2
2 4

Sample Output

3
1 8 9

Explanation

The first query is to erase the 2nd element in the vector, which is 4. Then, modifed vector is {1 6 2 8 9}, we want to remove the range of 2~4, which means the 2nd and 3rd elements should be removed. Then 6 and 2 in the modified vector are removed and we finally get {1 8 9}


 */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, temp;
vector<int> v;
cin >> N;

// fill vector
for(int i = 0; i < N; i++){
    cin >> temp;
    v.push_back(temp);
}

// remove item specified in 3rd line
cin >> temp;    
if( temp < v.size() )
    v.erase(v.begin() + temp - 1); 

// remove range specified in 4th line
int a, b;
cin >> a >> b;    

if( a < b   &&    b < v.size() )
    v.erase(v.begin() + a - 1, v.begin() + b - 1);

// print out the vector size and elements
cout << v.size() << endl;
for(auto _v : v)
    cout << _v << " ";
cout << endl;

return 0;

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     int ol,p=0,size1;
//     cin >> ol;
//     vector<int> sv(ol);
//     int size = sv.size();
//     for(int l=0;l<size;l++){
//         cin >> p;
//         sv[l]=p;
//     }
//     // remove item specified in 3rd line
//     cin >> p;    
//     if( p < size )
//         sv.erase(sv.begin() + p - 1); 

// // remove range specified in 4th line
//     cin >> size1;
//     vector<int> ev(size1);
//     for(int l=0;l<size1;l++){
//         cin >> p;
//         ev[l]=p;
//     }
//     int size2 = size-(size1+1);
//     for(int l=0;l<size2;l++){
//         sv.erase(sv.begin()+ev[l]-1,sv.begin()+ev[l+1]);
//     }
//     cout << size2 << "\n";
//     for(int l=0;l<size1;l++){
//         cout << sv[l] << " ";
//     }
//     return 0;
}
