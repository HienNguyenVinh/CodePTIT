#include<bits/stdc++.h>

using namespace std;

void handle(vector <int> a, int n, int k){
	long long cnt = 0;
	for(int i=0; i<n-1; ++i){
		cnt += upper_bound(a.begin() + i +1, a.end(), k-a[i]) - lower_bound(a.begin()+1+i, a.end(), k-a[i]);
	}
	cout << cnt << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		vector <int> a(n);
		for(int &x : a){
			cin >> x;
		}
		sort(a.begin(), a.end());
		handle(a, n, k);
	}
	return 0;
}
