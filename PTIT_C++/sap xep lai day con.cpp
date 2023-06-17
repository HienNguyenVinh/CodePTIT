#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int l=-1, r=-1;
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		for(int i=0; i<n-1; ++i){
			for(int j=i; j<n; ++j){
				if(a[j] < a[i]){
					l = i+1;
					break;
				}
			}
			if(l>0){
				break;
			}
		}
		for(int i=n-1; i>0; --i){
			for(int j=i; j>=0; --j){
				if(a[j] > a[i]){
					r = i+1;
					break;
				}
			}
			if(r>0){
				break;
			}
		}
		cout << l << " " << r << endl;
	}
	return 0;
}
