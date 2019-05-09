#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
	int num;
	int point = 0;
	bool check;
	while(cin >> num){
		check = 0;
		point = 0;
		while(num != 0){
			for(int i = 0 ;i < 10; i++){
				num--;
				point += 6;
				if(num == 0){
					check = 1;
					break;
				}
			}
			if(check == 1){
				break;
			}
			for(int i = 0 ;i < 10; i++){
				num--;
				point += 2;
				if(num == 0){
					check = 1;
					break;
				}
			}
			if(check == 1){
				break;
			}
			for(int i = 0 ;i < 20; i++){
				num--;
				point += 1;
				if(num == 0){
					check = 1;
					break;
				}
			}
			break;
			
		}
		cout << point << endl;	
	} 
	return 0;
} 

	
