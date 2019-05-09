#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	unsigned long long int a;
	cin >> a;
	a = (a >= 6 && a < 12) * 590 + (a >= 12 && a < 18) * 790 + (a >= 18 && a <60) * 890 + (a >= 60) * 399;
	cout << a;
	return 0;
} 
