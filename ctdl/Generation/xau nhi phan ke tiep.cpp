#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.length();
		int i = n-1;
		while(i>=-1 && s[i] == '1'){
			--i;
		}
		if(i==-1){
			for(int j=0; j<n; ++j){
				s[j]='0';
			}
		}else{
			s[i]= '1';
			for(int j=i+1; j<n; ++j){
				s[j] = '0';
			}
		}
		cout << s << endl;
	}	
	return 0;
}
