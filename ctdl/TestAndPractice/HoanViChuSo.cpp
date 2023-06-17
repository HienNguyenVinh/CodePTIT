#include<bits/stdc++.h>

using namespace std;
	
void handle(){
	string s;
	cin >> s;
	int n = s.size();
	int b[n];
	char a[n];
	for(int i=0; i<n; ++i){
		a[i] = s[i];
		b[i] = i;
	}
	sort(a,a+n);
	int ok=1;
	while(ok){
		for(int j=0; j<n; ++j){
			if(j == 0 && a[b[j]] == '0'){
				continue;
			}
			cout << a[b[j]];
		}
			cout << endl;
		int i=n-2;
		while(i>-1 && b[i]>b[i+1]){
			--i;
		}
		if(i == -1){
			ok = 0;
		}else{
			int j=n-1;
			while(b[j] < b[i]){
				--j;
			}
			swap(b[i],b[j]);
			int l=i+1,r=n-1;
			while(l<r){
				swap(b[l],b[r]);
				++l;--r;
			}
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		handle();	
	}
	return 0;
}
