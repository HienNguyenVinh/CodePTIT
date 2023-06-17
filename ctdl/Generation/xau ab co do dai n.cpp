#include<bits/stdc++.h>

using namespace std;

void init(char *a, int n){
	for(int i=1; i<=n; ++i){
		a[i] = 'A';
	}
}
void sinh(char *a, int n, int &ok){
	int i=n;
	while(i>=0 && a[i] == 'B'){
		--i;
	}
	if(i==0){
		ok = 0;
	}else{
		a[i] = 'B';
		for(int j=i+1; j<=n; ++j){
			a[j] = 'A';
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		char a[n+1];
		int ok = 1;
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
