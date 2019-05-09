#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	long long int a, b;
	cin >> a >> b;
	long long int ans = (b - a + 1) / 2 + (b - a + 1) % 2 - (a == b && a % 2 == 1) - (a != b && a % 2 == 1 && b % 2 == 1);
	cout << ans; 
	return 0;
}
