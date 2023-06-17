#include<bits/stdc++.h>

using namespace std;

int n;
void handle(){
	pair <int, int> pr[n];
	for(int i=0; i<n; ++i){
		cin >> pr[i].first;
		pr[i].second = i;
	}
	sort(pr, pr+n);
	int res = -1, Min = pr[0].second, k = pr[0].first;
	for(int i=0; i<n; ++i){
		if(pr[i].first > k){
			res = max(res, pr[i].second - Min);
		}
		if(pr[i].second < Min){
			Min = pr[i].second;
			k = pr[i].first;
		}
	}
	cout << res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		handle();
		cout << endl;
	}
	return 0;
}
