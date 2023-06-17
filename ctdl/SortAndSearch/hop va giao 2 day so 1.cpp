#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		int a[n],b[m];
		set<int> uni;
		set<int> inter;
		for(int i=0; i<n; ++i){
			cin >> a[i];
			uni.insert(a[i]);
		}
		for(int i=0; i<m; ++i){
			cin >> b[i];
			uni.insert(b[i]);
		}
		int i=0, j=0;
		while(i<n && j<m){
			if(a[i] == b[j]){
				inter.insert(a[i]);
				++i; ++j;
			}else if(a[i] < b[j]){
				++i;
			}else{
				++j;
			}
		}
		for(int x:uni){
			cout << x << " ";
		}
		cout << endl;
		for(int x:inter){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
