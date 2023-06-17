#include<bits/stdc++.h>

using namespace std;

const long long mod = 1e9+7;
void test(){
	int n;
	cin >> n;
	vector<long long> a(n);
	for(auto &i : a){
		cin >> i;
	}
	sort(a.begin(), a.end());
	long long s = 0;
	for(int i=0; i<n; ++i){
		s = (s + a[i]*i) % mod;
	}
	cout << s;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		test();
		cout << endl;
	}
	return 0;
}
