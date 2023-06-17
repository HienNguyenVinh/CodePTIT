#include<bits/stdc++.h>

using namespace std;
	
int main(){
	int n;
	cin >> n;
	int a[n],b[n];
	for(int i=0; i<n; ++i){
		cin >> a[i];
		b[i] = i;
	}
	sort(a,a+n);
	int ok=1;
	while(ok){
		for(int j=0; j<n; ++j){
			cout << a[b[j]] << " ";
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
	return 0;
}
