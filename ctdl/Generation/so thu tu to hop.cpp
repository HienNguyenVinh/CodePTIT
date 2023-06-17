#include<bits/stdc++.h>

using namespace std;
	

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[k+1],b[k+1],ok=1;
		for(int i=1; i<=k; ++i){
			cin >> a[i];
			b[i]=i;
		}
		int cnt = 1;
		while(ok){
			int m = 0;
			for(int i=1; i<=k; ++i){
				if(a[i] == b[i]){
					++m;
				}
			}
			if(m==k){
				cout << cnt << endl;
				break;
			}
			++cnt;
			int i = k;
			while(i>0 && b[i] == n-k+i){
				--i;
			}
			if(i==0){
				ok = 0;
			}else{
				++b[i];
				for(int j=i+1; j<=k; ++j){
					b[j] = b[i]+j-i;
				}
			}
		}
	}
	return 0;
}
