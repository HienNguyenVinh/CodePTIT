#include<bits/stdc++.h>

using namespace std;

void init(int *a, int n){
	for(int i=0; i<n; ++i){
		a[i] = 0;
	}
}
void in(int *a, int *b, int n, int k){
	int s = 0;
	for(int i=0; i<n; ++i){
		if(a[i] == 1){
			s+=b[i];
		}
	}
	if(s == k){
		for(int i=0; i<n; ++i){
			if(a[i] == 1){
				cout << b[i] << " ";
			}
		}
	}
}
void sinh(int *a, int n, int &ok){
	int i=n-1;
	while(i>=0 && a[i] == 1){
		--i;
	}
	if(i==0){
		ok = 0;
	}else{
		a[i] = 1;
		for(int j=i+1; j<n; ++j){
			a[j] = 0;
		}
	}
}
int main(){
	int n, k;
	cin >> n >> k;
	int a[n], b[n], ok=1;
	for(int i=0; i<n; ++i){
		cin >> b[i];
	}
	init(a,n);
	while(ok){
		in(a,b,n,k);
		sinh(a,n,ok);
	}
	return 0;
}
