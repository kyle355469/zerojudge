#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n != 0){
		int a, b;
		cin >> a >> b;
		int range = a - b;
		if(range % 2 == 1 || a < b){
			cout << "impossible" << endl;
		}else{
			range /= 2;
			int ans2 = a - b - range;
			int ans1 = a - ans2;
			cout << ans1 << " " << ans2 << endl;
		}
		n--;
	}
	return 0;
}

