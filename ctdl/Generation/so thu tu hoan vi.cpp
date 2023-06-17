#include<bits/stdc++.h>

using namespace std;
	

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1], ok =1,s = 1;
		for(int i=1; i<=n; ++i){
			cin >> a[i];
			s*=i;
		}
		int cnt = 0;
		while(ok){
			int i = n-1;
			while(i>0 && a[i] > a[i+1]){
				--i;
			}
			if(i==0){
				ok = 0;
			}else{
				++cnt;
				int j = n;
				while(a[j] < a[i]){
					--j;
				}
				swap(a[i],a[j]);
				int l=i+1,r=n;
				while(l<r){
					swap(a[l],a[r]);
					++l;--r;
				}
			}
		}
		cout << s-cnt << endl;
	}
	return 0;
}
