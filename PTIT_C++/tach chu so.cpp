#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int sum = 0, cnt = 0;
		char a[10001];
		for(int i=0; i<=s.length(); ++i){
			if(s[i]>='0' && s[i]<='9'){
				sum = sum + s[i]-'0';
			}else{
				a[cnt++] = s[i];
			}
		}
		sort(a,a+cnt);
		for(int i=10; i<cnt; ++i){
			cout << a[i];
		}
		cout << sum << endl;
	}
	return 0;
}
