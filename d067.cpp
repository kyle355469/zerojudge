#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
		int year;
		cin >> year;
		if(year % 400 == 0){
			cout << "a leap year" << endl;
		}else if(year % 100 == 0){
			cout << "a normal year" << endl;
		}else if(year % 4 == 0){
			cout << "a leap year" << endl;
		}else{
			cout << "a normal year" << endl;
		}
	return 0;
} 
