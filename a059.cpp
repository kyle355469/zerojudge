#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	int i = 1;
	while(n != 0){
		int a, b;
		int total = 0;
		cin >> a >> b;
		for(int i = sqrt(a); i < sqrt(b); i++){
			if(i * i >= a && i * i <= b){
				total += i * i;
			}
		}
		cout << "Case " << i << ": " << total << endl;
		i++;
		n--;
	}
	
	
	return 0;
}
