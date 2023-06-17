#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		int cnt = 0;
		for(int &x:a){
			cin >> x;
			if(x == k){
				++cnt;
			}
		}
		if(cnt == 0){
			cout << -1;
		}else{
			cout << cnt;
		}
		cout << endl;
	}
	return 0;
}
