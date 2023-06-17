#include<bits/stdc++.h>

using namespace std;

bool isConsonat(char x){
	return (x != 'A' && x != 'E');
}
void solve(string s){
	for(int i=0; i<s.size(); ++i){
		if(s[i] == 'A' || s[i] == 'E'){
			if(i>0 && i<s.size()-1 && isConsonat(s[i-1] && isConsonat(s[i+1]))){
				return;
			}
		}
	}
	cout << s << endl;
}
void Try(int i, char c, bool *vs, string s){
	for(char j='A'; j<=c; ++j){
		if(vs[j]){
			vs[j] = false;
			s.push_back(j);
			if(s.size() == c-'A'+1){
				solve(s);
			}else{
				Try(i+1, c, vs, s);
			}
			vs[j] = true;
			s.pop_back();
		}
	}
}
void test(){
	char c;
	cin >> c;
	string s = "";
	bool vs[127];
	for(int i=0; i<127; ++i){
		vs[i] = true;
	}
	Try(1, c ,vs, s);
}
int main(){
	test();
	cout << endl;
	return 0;
}
