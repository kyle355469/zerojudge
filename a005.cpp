#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int arr[5] = {};
		for(int i = 0; i < 4; i++){
			cin >> arr[i];
		}
		int check_plus = 0;
		int check_time = 0;
		int min = arr[1] - arr[0];
		int gen = arr[1] / arr[0];
		for(int i = 0; i < 3; i++){
			if(min == arr[i + 1] - arr[i]){
				check_plus++;
			}
		}
		for(int i = 0; i < 3; i++){
			if(gen == arr[i + 1] / arr[i]){
				check_time++;
			}
		}
		if(check_plus == 3){
			arr[4] = arr[3] + min;
		}else if(check_time == 3){
			arr[4] = arr[3] * gen;
		}
		for(int i = 0; i < 5; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;	
}
