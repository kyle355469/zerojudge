#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
		int a, b;
		cin >> a >> b;
		int count = 0;
		for(int year = a; year <= b; year++){
			if(year % 400 == 0){
				count++;
			}else if(year % 100 == 0){
				continue;
			}else if(year % 4 == 0){
				count++;
			}
		}
		cout << count;
	return 0;
} 
