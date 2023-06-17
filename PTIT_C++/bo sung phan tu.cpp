#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int *a = new int[n];
		set<int> s;
		for(int i=0; i<n; ++i){
			cin >> a[i];
			s.insert(a[i]);
		}
		sort(a,a+n);
		int m = s.size();
		int k = a[n-1]-a[0]+1;
		cout << k - m << endl;
	}
	return 0;
}
