#include<bits/stdc++.h>

using namespace std;

long long handle(int n, long long k){
	int ll = 123456789;
	if(k==0){
		return 1;
	}
	long long x = handle(n, k/2);
	x = (x*x) % ll;
	if(k%2 == 1){
		x = (x*n) % 123456789;
	}
	return x;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long x = handle(2, n-1);
		cout << x << endl; 
	}
	return 0;
}
