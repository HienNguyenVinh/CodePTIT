#include<bits/stdc++.h>

using namespace std;

void test(){
	int n,x;
	cin >> n >> x;
	vector<long long> a(n);
	for(auto &i:a){
		cin >> i;
	}
	int pos = upper_bound(a.begin(), a.end(), x) - a.begin();
	if(pos <= 0) pos = -1;
	cout << pos;
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
