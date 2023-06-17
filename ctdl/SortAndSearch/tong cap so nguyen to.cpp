#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		bool check[n+1];
		check[0] = check[1] = false;
		for(int i=2; i<=n; ++i){
			check[i] = true;
		}
		for(int i=2; i<=n; ++i){
			if(check[i]){
				for(int j=2*i; j<=n; j+=i){
					check[j] = false;
				}
			}
		}
		bool isTmdk = false;
		int m=0;
		for(int i=2; i<=n; ++i){
			if(check[i] && check[n-i]){
				m = i;
				isTmdk = true;
				break;
			}
		}
		if(isTmdk){
			cout << m << " " << n-m << endl;
		}else{
			cout << -1 << endl;
		}
		
	}
	return 0;
}
