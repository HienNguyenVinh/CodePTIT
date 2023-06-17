#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		int i=n-2;
		while(i>=-1 && a[i]>a[i+1]){
			--i;
		}
		if(i == -1){
			for(int i=0; i<n; ++i){
				a[i] = i+1;
			}
		}else{
			int j=n-1;
			while(a[j] < a[i]){
				--j;
			}
			swap(a[i],a[j]);
			int l=i+1, r=n-1;
			while(l<r){
				swap(a[l],a[r]);
				++l; --r;
			}
		}
		for(int j=0; j<n; ++j){
			cout << a[j] << " ";
		}
		cout << endl;
	}
	return 0;
}
