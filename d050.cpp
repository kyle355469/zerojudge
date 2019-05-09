#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	t = (t + 9) % 24;
	cout << t;
	return 0;
} 
