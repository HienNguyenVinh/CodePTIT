#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		map<int, int> cnt;
		for(int i=0; i<n; ++i){
			cin >> a[i];
			cnt[a[i]]++;
		}
		int max = 0, k;
		for(pair<int, int> x:cnt){
			if(x.second > max){
				max = x.second;
				k = x.first;
			}
		}
		if(max > n/2){
			cout << k;
		}else{
			cout << "NO";
		}
		cout << endl;
	}
	return 0;
}
