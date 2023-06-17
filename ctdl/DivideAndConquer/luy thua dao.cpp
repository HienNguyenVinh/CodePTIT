#include<bits/stdc++.h>

using namespace std;
const long long m = 1e9 + 7;

long long poww(long long n, long long k){
	if(k == 0){
		return 1;
	}
	long long x = poww(n, k/2);
	if(k % 2 == 0){
		return (x*x) % m;
	}else{
		return (n*((x*x) % m)) % m;
	}
}
long long reverse(long long n){
	long long r = 0;
	while(n > 0){
		r = 10*r + n%10;
		n/=10;
	}
	return r;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long r = reverse(n);
		long long x = poww(n, r);
		cout << x << endl;
	}
}
