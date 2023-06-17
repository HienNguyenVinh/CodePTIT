#include<bits/stdc++.h>

using namespace std;

int convert6(string s){
	for(int i=0; i<s.size(); ++i){
		if(s[i] == '5'){
			s[i] = '6';
		}
	}
//	int num;
//	stringstream(s) >> num;
//	return num;
	return stoi(s);
}
int convert5(string s){
	for(int i=0; i<s.size(); ++i){
		if(s[i] == '6'){
			s[i] = '5';
		}
	}
	int num;
	stringstream(s) >> num;
	return num;
}
int max(string a, string b){
	return convert6(a) + convert6(b);
}
int min(string a, string b){
	return convert5(a) + convert5(b);
}
int main(){
	string a,b;
	cin >> a >> b;
	cout << min(a,b) << " " << max(a,b) << endl;
	return 0;
}
