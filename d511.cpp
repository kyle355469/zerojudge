#include <iostream>
using namespace std;
int main(){
	int a, b, c, ans = 0;
	for(int i = 0; i < 5; i++){
		cin >> a >> b >> c;
		if(a + b > c && b + c > a && a + c > b){
			ans++;
		}
	}
	cout << ans;
	return 0;
}
