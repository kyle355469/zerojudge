#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main(){
	int n, m, l, q;
	cin >> n >> m >> l >> q;
	vector <int> arr[n + 1];
	bool poi[n + 1];
	for(int i = 0; i <= n; i++){
		poi[i] = false;
	}
	for(int i = 0; i < m; i++){
		int num, plus;
		cin >> num >> plus;
		arr[num].push_back(plus);
	}
		
	for(int i = 0; i < l; i++){
		bool done = false;
		int num;
		cin >> num;
		if(poi[num] == false){
			deque <int> line;
			line.push_back(num);
			while(!line.empty()){
				int check = line.front();
				line.pop_front();
				poi[check] = true;
				int kk = arr[check].size();
				for(int j = 0; j < kk; j++){
					if(poi[arr[check][j]] == false){
						line.push_back(arr[check][j]);
						
					}
				}
				
			}
		}
			
	}
	/*for(int i = 0; i <= n; i++){
		cout << poi[i] << " ";
	}*/
	for(int i = 0; i < q; i++){
		int num;
		cin >> num;
		if(poi[num] == true){
			cout << "TUIHUOOOOOO" << endl;
		}else{
			cout << "YA~~" << endl;
		}
	}
	return 0;
}
