#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int b[n], cnt=0;
		for(int i=0; i<n; ++i){
			cin >> a[i];
			for(int j=0; j<i; ++j){
				if(a[i] == a[j]){
					b[cnt++] = a[i];
				}
			}
		}
		if(cnt == 0){
			cout << -1;
		}else{
			cout << b[0];
		}
		cout << endl;
	}
	return 0;
}
