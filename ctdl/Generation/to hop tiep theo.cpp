#include<bits/stdc++.h>

using namespace std;
	

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[k+1],b[k+1];
		for(int i=1; i<=k; ++i){
			cin >> a[i];
			b[i] = a[i];
		}
		int i = k;
		while(i>=0 && b[i] == n-k+i){
			--i;
		}
		if(i==0){
			cout << k << endl;
		}else{
			++b[i];
			for(int j=i+1; j<=k; ++j){
				b[j] = b[i]+j-i;
			}
			int cnt = 0;
			for(int j=1; j<=k; ++j){
				for(int m=1; m<=k; ++m){
					if(b[j] == a[m]) ++cnt;
				}
			}
			cout << k-cnt << endl;
		}
		
	}
	return 0;
}
