#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int year;
		cin >> year;
		if(year % 400 == 0){
			cout << "Case " << i << ": a leap year" << endl;
		}else if(year % 100 == 0){
			cout << "Case " << i << ": a normal year" << endl;
		}else if(year % 4 == 0){
			cout << "Case " << i << ": a leap year" << endl;
		}else{
			cout << "Case " << i << ": a normal year" << endl;
		}
	}
	return 0;
} 

