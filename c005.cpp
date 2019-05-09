#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n != 0){
		long long int t;
		long long int total = 0;
		cin >> t;
		for(int i = 0; i < t; i++){
			long long int a, b, c;
			cin >> a >> b >> c;
			total += a * c;
		} 
		cout << total << endl;
		n--;
	}
	return 0;
}

