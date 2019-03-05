#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << min({a + 1, b, c - 1}) * 3 << endl;
	return 0;
}
