#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int ans = n / 12 * 50 + n % 12 * 5;
	cout << ans;
	return 0;
}
