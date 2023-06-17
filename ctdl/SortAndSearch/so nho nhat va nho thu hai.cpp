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
		if(a[n-1] == a[0]){
			cout << -1;
		}else{
			cout << a[0] << " ";
			for(int i=0; i<n-1; ++i){
				if(a[i] != a[i+1]){
					cout << a[i+1];
					break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}
