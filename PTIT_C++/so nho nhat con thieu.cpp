#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n-1];
		int sum = 0;
		for(int &x : a){
			cin >> x;
			sum += x;
		}
		cout << n*(n+1)/2 - sum << endl;
	}
	return 0;	
}
