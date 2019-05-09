#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
	int num;
	cin >> num;
	cout << num / 3 + (num % 3 != 0);
	return 0;
} 
