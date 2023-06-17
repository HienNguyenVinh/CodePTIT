#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		for(int i=0; i<n-k+1; ++i){
			int m = -1;
			for(int j=0; j<k; ++j){
				if(m < a[i+j]){
					m = a[i+j];
				}
			}
			cout << m << " ";
		}
		cout << endl;
	}
	return 0;
}
