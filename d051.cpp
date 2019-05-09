#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main(){
	double f;
	cin >> f;
	double ans = (double)((f - 32) * 5 / 9);
	printf("%.3f", ans);
	return 0;
} 
