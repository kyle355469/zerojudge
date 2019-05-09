#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
	long long int a, b;
	cin >> a >> b;
	if(a != b){
		if(a % 2 != 0) a++;
		if(b % 2 != 0) b--;
		cout << (a + b) * (b / 2 - a / 2 + 1) / 2;
	}else if(a == b && a % 2 == 0){
		cout << a;
	}else{
		cout << "0";
	}
	
	return 0;
} 
