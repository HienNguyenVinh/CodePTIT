#include<bits/stdc++.h>

using namespace std;

void test(int *a, int n){
		cout << "[";
		for(int i=0; i<n-1; ++i){
			cout << a[i] << " ";
		}
		cout << a[n-1] << "]" << endl;
		for(int i=0; i<n-1; ++i){
			a[i] = a[i]+a[i+1];
		}
		if(n>1){
			test(a,n-1);
		}
		
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		test(a,n);
	}
	return 0;
}
