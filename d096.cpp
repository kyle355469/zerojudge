#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long long int n;
	while(cin >> n){
		long long int count = (n + 1) * (n + 1) / 2 - 1;
		cout << count * 3 - 6 << endl; 
	}
	return 0;
}


