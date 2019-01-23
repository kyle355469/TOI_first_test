#include <string>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <queue>
#include <deque>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n, m, q;
	cin >> n >> m >> q;
	int ask[q];
	int turn[m][2] = {};
	int count = 0;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < 2; j++){
			cin >> turn[i][j];
		}
	}
	for(int i = 0; i < q; i++){
		cin >> ask[i];
	}
	for(int i = 0; i < q; i++){
		count = 0;
		for(int j = 0; j < m; j++){
			if((ask[i] >= turn[j][0] && ask[i] <= turn[j][1]) ||
			   (ask[i] >= turn[j][1] && ask[i] <= turn[j][0])){
				count++;
				
			}
		}
		cout << (count % 2);
	}
	return 0;
} 
