#include<bits/stdc++.h>

using namespace std;

char inhoa(char x){
	if(x > 'B'){
		return char(x-2);
	}
	if(x == 'B') return 'Z';
	if(x == 'A') return 'Y';
}
char inthuong(char x){
	if(x < 'y'){
		return char(x+2);
	}
	if(x == 'y') return 'a';
	if(x == 'z') return 'b';
}
int main(){
	string s;
	getline(cin,s);
	int size = s.length();
	string a;
	for(int i=0; i<size; ++i){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			a+=inhoa(s[i]);
		}else if(s[i] >= 'a' && s[i] <= 'z'){
			a+=inthuong(s[i]);
		}else{
			a+=s[i];
		}
	}
	cout << a;
	return 0;
}
