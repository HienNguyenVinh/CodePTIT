#include<bits/stdc++.h>

using namespace std;

vector <string> v;
string s;

void check(){
	if(s.front()=='8' && s.back()=='6' && s.find("88")==-1 && s.find("6666")==-1){
		v.push_back(s);
	}
}
void generate(int i, int n){
	for(int j=0; j<=1; ++j){
		if(j==0){
			s[i] = '6';
		}else{
			s[i] = '8';
		}
		if(i == n-1){
			check();
		}else{
			generate(i+1, n);
		}
	}
}
void test(int n){
	s.resize(n);
	generate(0, n);
	sort(v.begin(), v.end());
	for(auto x:v){
		cout << x << endl;
	}
}
int main(){
	int n;
	cin >> n;
	test(n);
 	return 0;
}
