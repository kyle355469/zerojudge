#include <iostream>
#include <algorithm>
using namespace std;
int round(int);
 
int main(){
	int t;
	cin >> t;
	int n;
	while(t != 0){
		cin >> n;
		int count = 0;
		for(int i = 2; i <= n; i++){
			if(round(i)) count++;
		} 
		cout << count << endl;
		t--;
	}
		
	return 0;
}

int round(int num){
	bool check;
	if(num == 1){
		check = true;
		return check;
	}
	if(num % 2 == 0){
		check = round(num / 2);
		return check;
	}
	if(num % 5 == 0){
		check = round(num / 5);
		return check;
	}
	check = false;
	return check;
}
