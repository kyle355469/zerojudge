#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a;
	int total;
	while(cin >> a){
		total = 0;
		for(int i = 1; i < a; i++){
			if(a % i == 0){
				total += i;
			}
		}
		if(total > a){
			cout << "�ռ�" << endl; 
		}else if(total < a){
			cout << "����" << endl; 
		}else{
			cout << "������" << endl; 
		} 
	}
		
	return 0;
}
