#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a, b, c;
	while(cin >> a >> b >> c){
		int d = b * b - 4 * a * c;
		if(d == 0){
			cout << "Two same roots x=" << (-1 * b / (a * 2)) << endl;
		}else if(d < 0){
			cout << "No real root" << endl;
		}else{
			int x1 = (-1 * b + sqrt(d)) / (2 * a);
			int x2 = (-1 * b - sqrt(d)) / (2 * a);
			cout << "Two different roots x1=" << x1 << " , x2=" << x2 << endl;
		}
	}
		
	return 0;
}
