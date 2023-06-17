#include<bits/stdc++.h>

using namespace std;
	
void init(int *a, int n){
	for(int i=1; i<=n; ++i){
		a[i] = 0; 
	}
}
void out(int *a, int n){
	int check = 1;
	for(int i=1; i<=n/2; ++i){
		if(a[i] != a[n+1-i]){
			check = 0;
		}
	}
	if(check){
		for(int i=1; i<=n; ++i){
			cout << a[i] << " "; 
		}
		cout << endl;
	}
}
void sinh(int *a, int n, int &ok){
	int i=n; 
	while(i>=0 && a[i]==1){
		--i;
	}
	if(i==0){
		ok = 0;
	}else{
		a[i] = 1;
		for(int j=i+1; j<=n; ++j){
			a[j] = 0;
		}
	}
}
int main(){
	int n;
	cin >> n;
	int a[n+1], ok = 1;
	init(a,n);
	while(ok){
		out(a,n);
		sinh(a,n,ok);
	}
	return 0;
}
