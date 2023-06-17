#include<bits/stdc++.h>

using namespace std;

long long f[46];

void handle(){
	int n, k;
	cin >> n >> k;
	int cnt = 0;
	if(n == 0){
		cout << 1;
	}else if(n == 1){
		cout << 0;
	}else{
		while(n > 2){
			if(k >= f[n-1]){
				cnt += f[n-2];
				k -= f[n-1];
				n -= 2;
			}else{
				n -= 1;
			}
		}
		cout << cnt;
	}
	
}
int main(){
	f[0] = 0;
	f[1] = 1;
	for(int i=2; i<47; ++i){
		f[i] = f[i-1] + f[i-2];
	}
	int t;
	cin >> t;
	while(t--){
		handle();
		cout << endl;
	}
	return 0;
}

