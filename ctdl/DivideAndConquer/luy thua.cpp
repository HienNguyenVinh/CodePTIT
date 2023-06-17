#include<bits/stdc++.h>

using namespace std;

const long long m = pow(10,9) + 7;
long long handle(int n, int k){
	if(k == 0){
		return 1;
	}
	long long x = handle(n, k/2);
	x = (x*x) % m;
	if(k%2 == 1){
		x = x*n % m;
	}
	return x;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		long long res = handle(n,k);
		cout << res << endl;
	}
	return 0;
}
