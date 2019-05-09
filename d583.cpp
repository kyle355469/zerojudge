#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a;
	while(cin >> a){
		int arr[a];
		for(int i = 1; i <= a; i++){
			cin >> arr[i];
		}
		for(int i = 1; i <= a; i++){
			cout << i << " ";
		}
		cout << "\n";
	}
		
	return 0;
}
