#include <iostream>
using namespace std;
int main(){
	long long int n, a, b, c;
	cin >> n;
	while(n != 0){
		cin >> a >> b >> c;
		long long int ans = 0;
		switch(a){
			case 1:
				ans = b + c;
				cout << ans << endl;
				break;
			case 2:
				ans = b - c;
				cout << ans << endl;
				break;
			case 3:
				ans = b * c;
				cout << ans << endl;
				break;
			case 4:
				ans = b / c;
				cout << ans << endl;
				break;
		}
		n--;
	}
	return 0;
}
