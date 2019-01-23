#include <iostream>
#include <sstream>
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
	int n;
	cin >> n;
	int a[n], b[n];
	int map[n + 1][n + 1] = {};
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		cin >> b[i];
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i - 1] == b[j - 1]){
				map[i][j] = map[i - 1][j - 1] + 1;
			}else{
				map[i][j] = max(map[i][j - 1], map[i - 1][j]);
			}
		}
	}
	cout << map[n][n] << '\n';
	return 0;
} 
