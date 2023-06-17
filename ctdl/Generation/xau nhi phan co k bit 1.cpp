#include<bits/stdc++.h>

using namespace std;

void sinh(int *a, int n, int &ok){
	int i=n; 
	while(i>0 && a[i] == 1){
		--i;
	}
	if(i == 0){
		ok = 0;
	}else{
		a[i] = 1;
		for(int j=i+1; j<=n; ++j){
			a[j] = 0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n+1], ok =1;
		for(int i=1; i<=n; ++i){
			a[i] = 0;
		}
		while(ok){
			int cnt = 0;
			for(int i=1; i<=n; ++i){
				if(a[i] == 1){
					++cnt;
				}
			}
			if(cnt == k){
				for(int i=1; i<=n; ++i){
					cout << a[i];
				}
				cout << endl;
			}
			sinh(a,n,ok);
		}
	}
	return 0;
}
