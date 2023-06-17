#include<bits/stdc++.h>

using namespace std;

int findLeft(int *a, int n){
	for(int i=0; i<n-1; ++i){
		int min = i;
		for(int j=i+1; j<n; ++j){
			if(a[min] > a[j]){
				return min+1;
			}
		}
	}
}
int findRight(int *a, int n){
	for(int i=n-1; i>0; --i){
		int max = i;
		for(int j=i-1; j>=0; --j){
			if(a[max] < a[j]){
				return max+1;
			}
		}
	}
}
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
		int l,r;
		l = findLeft(a,n);
		r = findRight(a,n);
		cout << l << " " << r;
		cout << endl;
	}
	return 0;
}
