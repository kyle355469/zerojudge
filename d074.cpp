#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	int d = 0;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		d = max(d, a);
	}
	cout << d;
	return 0;
} 
