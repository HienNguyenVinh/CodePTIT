#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string a[n];
		set<int> cs;
		for(int i=0; i<n; ++i){
			cin >> a[i];
			int size = a[i].length();
			for(int j=0; j<size; ++j){
				cs.insert(a[i][j] - '0');
			}
		}
		for(int x:cs){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
