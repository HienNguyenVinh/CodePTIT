#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long n;
		cin >> n;
		long long *a = new long long[n];
		long cnt = 0;
		for(long i=0; i<n; ++i){
			a[i] = 0;
			long long m;
			cin >> m;
			if(m!=0){
				a[cnt++] = m;
			}
		}
		for(int i=0; i<n; ++i){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
