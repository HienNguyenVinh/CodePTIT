#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n;
	cin >> n;
	int a[n+1][n+1] = {};
	cin.ignore();
	string s;
	for(int i=1; i<=n; ++i){
		getline(cin, s);
		stringstream ss(s);
		int x;
		while(ss >> x){
			a[i][x] = 1;
			a[x][i] = 1;
		}
	}
	for(int i=1; i<=n; ++i){
		for(int j=1; j<=n; ++j){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
int main(){
	handle();
	return 0;
}
