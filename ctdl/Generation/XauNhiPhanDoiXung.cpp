#include<bits/stdc++.h>

using namespace std;

string s;

void check(string tmp){
	int n = tmp.size();
	for(int i=0; i<=n/2; ++i){
		if(tmp[i] != tmp[n-i-1]){
			cout << "NO";
			return;
		}
	}
	cout << "YES";
}
void handle(){
	int l, r;
	cin >> l >> r;
	--l; --r;
	string tmp = s.substr(l, r-l+1);
	check(tmp);
}
int main(){
	cin >> s;
	int t;
	cin >> t;
	while(t--){
		handle();
		cout << endl;
	}
	return 0;
}
