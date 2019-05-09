#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
	int hr, mi;
	cin >> hr >> mi;
	if(hr > 7 && hr < 17 ){
		cout << "At School";
	}else if(hr == 7 && mi >= 30){
		cout << "At School";
	}else{
		cout << "Off School";
	}
	return 0;
} 

