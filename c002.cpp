#include <iostream>
#include <cmath>
using namespace std;
int f(int );
int main(){
	int n;
	while(cin >> n && n != 0){
		cout << "f91(" << n << ") = " << f(n) << endl;
	}
	
	return 0;
}

int f(int n){
	if(n <= 100){
		return f(f(n + 11));
	}else{
		return n - 10;
	}
}
