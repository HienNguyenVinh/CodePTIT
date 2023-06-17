#include<bits/stdc++.h>

using namespace std;

int binarySearch(int *a, int k, int l, int r){
	if(l<=r){
		int mid = (l+r)/2;
		if(a[mid] == k){
			return mid;
		}
		if(a[mid]< k){
			return binarySearch(a,k,mid+1,r);
		}else{
			return binarySearch(a,k,l,mid-1);
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n+1], m=-1;
		a[0] = 0;
		for(int i=1; i<=n; ++i){
			cin >> a[i];
			if(a[i] < a[i-1]){
				m = i;
			}
		}
		int pos;
		if(m == -1){
			pos = binarySearch(a,k,1,n);
			continue;
		}
		if(a[m-1] < k){
			pos = binarySearch(a,k,m,n);
		}else{
			pos = binarySearch(a,k,1,m-1);
		}
		cout << pos << endl;
	}
	return 0;
}
