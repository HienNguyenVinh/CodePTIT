#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		sort(a,a+n);
		int cnt = 1;
		for(int i=0; i<n-1; ++i){
			if(a[i] != a[i+1]){
				++cnt;
			}
		}
		int l=a[0], r=a[n-1];
		cout << r-l+1-cnt << endl;
	}
	return 0;
}
