#include<bits/stdc++.h>

using namespace std;

int binarySearch(int *a, int l, int r, int x){
	while(l<=r){
		int mid = (l+r)/2;
		if(a[mid] == x){
			return 1;
		}
		if(mid < x) {
			l = mid + 1;
		}else{
			r = mid - 1;
		}
	}
	return -1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int *a = new int[n+1];
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		sort(a,a+n);
		cout << binarySearch(a,0,n-1,x) << endl;
	}
	return 0;
}

