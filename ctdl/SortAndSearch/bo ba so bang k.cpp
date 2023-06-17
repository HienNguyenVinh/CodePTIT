#include<bits/stdc++.h>

using namespace std;

void handle(vector <int> a, int n, int k){
	for(int i=0; i<n-1; ++i){
		for(int j=i+1; j<n; ++j){
			if(binary_search(a.begin() + j + 1, a.end(), k-a[i]-a[j])){
				cout << "YES" << endl;
				return;
			}
		}
	}
	cout << "NO" << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector <int> a(n);
		for(int &x : a){
			cin >> x;
		}
		sort(a.begin(), a.end());
		handle(a, n, k);
	}
	return 0;
}
