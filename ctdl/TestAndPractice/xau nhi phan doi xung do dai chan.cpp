#include<bits/stdc++.h>

using namespace std;

void in(int *a, int n){
	for(int i=1; i<=n; ++i){
		cout << a[i];
	}
	cout << " ";
}
bool check(int *a, int n){
	for(int i=1; i<=n/2; ++i){
		if(a[i] != a[n+1-i]){
			return false;
		}
	}
	return true;
}
void test(int *a, int n, int i){
	for(int j=0; j<=1; ++j){
		a[i] = j;
		if(i == n ){
			if(check(a, n)){
				in(a, n);
			}
		}else{
			test(a, n, i+1);
		}
	}
}
void handle(int n){
	for(int i=2; i<=n; i+=2){
		int a[i+1];
		test(a, i, 1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		handle(n);
		cout << endl;
	}
	return 0;
}
