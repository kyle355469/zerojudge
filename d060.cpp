#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	n = n - 60;
	n = 25 - n;
	n = n % 60;
	cout << n; 
	return 0;
} 
