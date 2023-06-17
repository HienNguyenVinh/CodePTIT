#include<bits/stdc++.h>

using namespace std;

void handle1(){
	int n;
	cin >> n;
	int a[n];
	int l = 0, r = 0;
	for(int i=0; i<n; ++i){
		cin >> a[i];
		r += a[i];
	}
	r -= a[0];
	for(int i=1; i<n-1; ++i){
		l += a[i-1];
		r -= a[i];		
		if(l == r){
			cout << i+1;
			return;
		}

	}
	cout << -1;
}
void handle2(){
	int n;
	cin >> n;
	int a[n+1];
	a[0] = 0;
	for(int i=1; i<=n; ++i){
		cin >> a[i];
		a[i] += a[i-1];
	}
	for(int i=1; i<=n; ++i){
		int l = a[i-1];
		int r = a[n] - a[i];
		if(l == r){
			cout << i;
			return;
		}
	}
	cout << -1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
//		handle1();
		handle2();
		cout << endl;
	}
	return 0;
}
