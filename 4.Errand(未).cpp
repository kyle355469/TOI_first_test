#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
using namespace std;

struct point {int r, c;}p ;

int main(){
	int dr[] = {1, 0, -1, 0};
	int dc[] = {0, 1, 0, -1};
	int n, m ,k, q;
	cin >> n >> m >> k >> q;
	deque <point> jj;
	int map[n + 1][m + 1];
	for(int i = 1; i <= n; i++){
		for(int l = 1; l <= m; l++){
			cin >> map[i][l];
			
		}
	}
	int guild[k][2] = {};
	for(int i = 1; i < k; i++){
		for(int l = 1; l < 2; l++){
			cin >> guild[i][l];
		}
	}
	int lon[4] = {};
	for(int i = 0; i < q; i++){
		for(int j = 0; j < 4; j++){
			cin >> lon[j];
		}
		jj.push_back(point{ lon[0], lon[1]});
		while(jj.size()){
			p = jj.front(), jj.pop_front();
			for(int l = 0; l < 4; l++){
				int r = p.r + dr[k];
				int c = p.c + dc[k];
				if(r >= 0 && r <= n && c >= 0 && c <= m && map[r][c] == 0){
					map[r][c] = map[p.r][p.c] + 1;
					jj.push_back(point{ r, c});
				}
			}
		}
		if(map[lon[2]][lon[3]]){
			cout << map[lon[2]][lon[3]] << '\n';
		}else{
			cout << "-1\n";
		}
	}
	return 0;
}
