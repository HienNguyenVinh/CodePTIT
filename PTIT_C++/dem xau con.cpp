#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int k, cnt = 0;
		cin >> s >> k;
		int l = s.length();
		for(int i=0; i<l; ++i){
			set <char> tmp;
			for(int j=i; j<l; ++j){
				tmp.insert(s[j]);
				if(tmp.size() == k){
					++cnt;
				}
				if(tmp.size() > k){
					break;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
