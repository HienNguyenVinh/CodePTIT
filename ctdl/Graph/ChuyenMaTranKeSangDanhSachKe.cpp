#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector <vector <int>> vt(n+1);
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			int x;
			cin >> x;
			if(x == 1){
				vt[i].push_back(j);
			}
		}
	}
	for(int i=1; i<=n; ++i){
		for(int j:vt[i]){
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}
