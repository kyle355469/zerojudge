#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a;
	int total;
	while(cin >> a){
		total = 0;
		for(int i = 1; i < a; i++){
			if(a % i == 0){
				total += i;
			}
		}
		if(total > a){
			cout << "盈數" << endl; 
		}else if(total < a){
			cout << "虧數" << endl; 
		}else{
			cout << "完全數" << endl; 
		} 
	}
		
	return 0;
}
