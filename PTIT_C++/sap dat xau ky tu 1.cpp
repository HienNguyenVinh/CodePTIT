#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		map<char, int> cnt;
		int max = 0;
		char kt;
		for(int i=0; i<s.size(); ++i){
			++cnt[s[i]];
			if(max < cnt[s[i]]){
				max = cnt[s[i]];
				kt = s[i];
			}
		}
		if(cnt[kt]-1 > s.size()-cnt[kt]){
			cout << 0 << endl;
		}else{
			cout << 1 << endl;
		}
	}
	return 0;
}
