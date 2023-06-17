#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int a[n+1] = {};
	while(m--){
		int l, r;
		cin >> l >> r;
		for(int i=l; i<=r; ++i){
			if(a[i] == 0){
				a[i] = 1;
			}else{
				a[i] = 0;
			}
		}
	}
	for(int i=1; i<=n; ++i){
		cout << a[i] << " ";
	}
	return 0;
}
