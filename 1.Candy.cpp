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
	vector <int> box1;
	deque <int> box2;
	box1.clear();
	box2.clear();
	while(n > 0){
		int t;
		cin >> t;
		if(t == 1){		  // box 1 push
			int type;
			cin >> type;
			box1.push_back(type);
		}else if(t == 2){ // box 2 push
			int type;
			cin >> type;
			box2.push_back(type);
		}else if(t == 3){ // box 1 pop
			cout << box1.back() << '\n';
			box1.pop_back();
		}else if(t == 4){ // box 2 pop
			cout << box2.front() << '\n';
			box2.pop_front();
		}
		n--;
	}
	return 0;
} 
