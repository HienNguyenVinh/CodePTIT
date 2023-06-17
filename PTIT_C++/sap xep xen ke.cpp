#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int *a = new int[n];
		for(int i=0; i<n; ++i){
			cin >> a[i];
		}
		sort(a,a+n);
		int k=n-1, j=0;
		for(int i=0; i<n; ++i){
			if(i%2 == 0){
				cout << a[k] << " ";
				--k;
			}else{
				cout << a[j] << " ";
				++j;
			}
		}
		cout << endl;
	}
	return 0;
}
