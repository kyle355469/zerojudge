#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a;
	int big = -100;
	for(int i = 0; i < 3; i++){
		cin >> a;
		big = max(big, a);
	}
	cout << big;
	return 0;
} 
