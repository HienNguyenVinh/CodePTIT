#include<bits/stdc++.h>

using namespace std;

void init(int *a, int n){
	for(int i=0; i<n; ++i){
		a[i] = 0;
	}
}
int check(int *a, int *b, int n, int k){
	int s = 0;
	for(int i=0; i<n; ++i){
		if(a[i] == 1){
			s+=b[i];
		}
	}
	if(s == k){
		return 1;
	}
	return 0;
}
void sinh(int *a, int n, int &ok){
	int i=n-1;
	while(i>=-1 && a[i] == 1){
		--i;
	}
	if(i==-1){
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
	int cnt = 0;
	while(ok){
		if(check(a,b,n,k)){
			for(int i=0; i<n; ++i){
				if(a[i] == 1){
					cout << b[i] << " ";
				}
			}
			cout << endl;
			++cnt;
		}
		sinh(a,n,ok);
	}
	cout << cnt << endl;
	return 0;
}
