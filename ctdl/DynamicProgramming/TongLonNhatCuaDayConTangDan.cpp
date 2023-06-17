#include<bits/stdc++.h>

using namespace std;

void handle(){
	int n;
	cin >> n;
	int a[n];
	for(int i=0; i<n; ++i){
		cin >> a[i];
	}
	int f[n], res = 0;
	for(int i=0; i<n; ++i){
		f[i] = a[i];
		for(int j=0; j<i; ++j){
			if(a[i] > a[j]){
				f[i] = max(f[i], f[j] + a[i]);
			}	
		}
		res = max(res, f[i]);
	}
	cout << res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		handle();
		cout << endl;
	}
	return 0;
}
