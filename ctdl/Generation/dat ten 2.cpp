#include<bits/stdc++.h>

using namespace std;

void in(int *a, int k){
	for(int i=1; i<=k; ++i){
		cout << char(a[i]+'A'-1);
	}
	cout << endl;
}
void tohop(int i, int *a, int n, int k){
	for(int j=a[i-1]+1; j<=n-k+i; ++j){
		a[i] = j;
		if(i == k){
			in(a,k);
		}else{
			tohop(i+1,a,n,k);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n+1];
		a[0] = 0;
		tohop(1,a,n,k);
	}
	return 0;
}
