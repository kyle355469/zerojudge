#include <iostream>
#include <queue>
#include <algorithm>
struct point{
	int x;
	int y;
};
using namespace std;

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};

int main(){
	int n, m;
	cin >> n >> m;
	int arr[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
		}
	}
	int checktime;
	cin >> checktime;
	while(checktime){
		int check;
		cin >> check;
		int arrc[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				arrc[i][j] = arr[i][j];
			}
		}
		queue <point> pos;
		int high = 0;
		
		for(int j = 0; j < n; j++){
			for(int l = 0; l < m; l++){
				int count = 0;
				if(arrc[j][l] == check){
					pos.push({j, l});
					while(!pos.empty()){
						
						point newpoint = pos.front();
						pos.pop();
						arrc[newpoint.x][newpoint.y] = 0;
						count++;
						
						/*for(int g = 0; g < n; g++){
							for(int h = 0; h < m; h++){
								cout << arrc[g][h] << " ";
							}
							cout << endl;
						}
						cout << count << " " << high << endl;*/
						
						for(int i = 0; i < 4; i++){
							if(newpoint.x + dx[i] >= 0 && newpoint.x + dx[i] < n && 
							newpoint.y + dy[i] >= 0 && newpoint.y + dy[i] < m &&
							arrc[newpoint.x + dx[i]][newpoint.y + dy[i]] == check){
								pos.push({newpoint.x + dx[i], newpoint.y + dy[i]});
								arrc[newpoint.x + dx[i]][newpoint.y + dy[i]] = 0;
							}
						}
						
					}
				}
				if(count >= high){
					high = count;
				}
			}
		}
		
		if(high < 2){
			cout << "0" << endl;
		}else {
			cout << high<< endl;
		}
		checktime--;
	}
	return 0;
}
