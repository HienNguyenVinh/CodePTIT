#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		int size = s.length();
		int cnt = size;
		for(int i=0; i<size-1; ++i){
			for(int j=i+1; j<size; ++j){
				if(s[i] == s[j]){
					++cnt;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
