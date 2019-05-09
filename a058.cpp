#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	int num;
	int arr[3] = {};
	for(int i = 0; i < n ; i++){
		cin >> num;
		arr[num % 3] += 1;
	}
	cout << arr[0] << " " << arr[1] << " " << arr[2] ;
	return 0;
} 

	
