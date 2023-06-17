#include<bits/stdc++.h>

using namespace std;

void in(int *a, int k){
	for(int i=1; i<=k; ++i){
		cout << char(a[i]+'A');
	}
	cout << endl;
}
void tohop(int *a, int n, int k, int i){
	for(int j = a[i-1]; j<n; ++j){
		a[i] = j;
		if(i==k){	
			in(a,k);
		}else{
			tohop(a,n,k,i+1);
		}
	}
}
int main(){
	char c;
	int k;
	cin >> c >> k;
	int n = c-'A'+1;
	int a[k];
	a[0] = 0;
	tohop(a,n,k,1);
	return 0;
}
