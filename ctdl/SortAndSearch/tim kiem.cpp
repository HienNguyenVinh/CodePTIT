#include<bits/stdc++.h>

using namespace std;

int binarySearch(int *a, int l, int r, int k){
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid] == k){
			return 1;
		}else if(a[mid] < k){
			return binarySearch(a,mid+1,r,k);
		}else{
			return binarySearch(a,l,mid-1,k);
		}
	}
	return -1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		cout << binarySearch(a,0,n-1,k) << endl;
	}
	return 0;
}
