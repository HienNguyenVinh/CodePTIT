#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		long m;
		cin >>n >>m;
		long a[n],am[n],duong[n];
		long max = -1000000000;
		int cnt1 = 0, cnt2 = 0;
		for(int i=0; i<n; ++i){
			cin >> a[i];
			if(a[i]<0){
				am[cnt1++] = a[i];
			}else{
				duong[cnt2++] = a[i];
			}
			if(a[i]>max) {
				max = a[i];
			}
		}
		int check = 1;;
		for(int i=0; i<n; ++i){
			if(i<cnt1){
				a[i] = am[i];
			}else{
				a[i] = duong[i-cnt1];
			}
			if(a[i] == max && check){
				cout << m << " ";
				check = 0;
			}
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
