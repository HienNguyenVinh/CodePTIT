#include<bits/stdc++.h>

using namespace std;

void in(int *a, string s, int n){
	for(int i=0; i<n; ++i){
		cout << s[a[i]];
	}
	cout  << " ";
}
void hvi(int *a, string s, bool *used, int n, int i){
	for(int j=0; j<n; ++j){
		if(used[j] == false){
			a[i] = j;
			used[j] = true;
			if(i==n-1){
				in(a,s,n);
			}else{
				hvi(a,s,used,n,i+1);
			}
			used[j] = false;
		}
		
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		int a[n];
		bool used[n];
		for(int i=0; i<n; ++i){
			used[i] = false;
		}
		hvi(a,s,used,n,0);
		cout << endl;
	}
	return 0;
}
