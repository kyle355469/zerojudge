#include <iostream>
using namespace std;
int main(){
	long long int n, m;
	while(cin >> n >> m){
		cout << m + (n != m) << endl;
	}
	return 0;
}
