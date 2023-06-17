#include<bits/stdc++.h>

using namespace std;

void init(int *a, int n){
	for(int i=1; i<=n; ++i){
		a[i] = i;
	}
}
void sinh(int *a, int n, int &ok){
	int i=n-1; 
	while(i>=0 && a[i] > a[i+1]){
		--i;
	}
	if(i==0){
		ok = 0;
	}else{
		int j=n;
		while(a[j] < a[i]){
			--j;
		}
		swap(a[i], a[j]);
		int l= i+1, r=n;
		while(l<r){
			swap(a[l],a[r]);
			++l, --r;
		}
	}
}
int main(){
	int t; 
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1], ok=1;
		init(a,n);
		while(ok){
			for(int i=1; i<=n; ++i){
				cout << a[i];
			}
			cout << " ";
			sinh(a,n,ok);
		}
		cout << endl;
	}
	return 0;
}
