#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int *a = new int[n];
		int m;
		for(int i=0; i<n; ++i){
			cin >> a[i];
			if(a[i] == x){
				m = i+1;
			}
		}
		cout << m << endl;
	}
	return 0;
}
