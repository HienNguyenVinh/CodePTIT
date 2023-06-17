#include<bits/stdc++.h>

using namespace std;

char inthuong(char x){
	if(x > 'b'){
		return char(x-2);
	}
	if(x == 'b') return 'z';
	if(x == 'a') return 'y';
}
char inhoa(char x){
	if(x < 'Y'){
		return char(x+2);
	}
	if(x == 'Y') return 'A';
	if(x == 'Z') return 'B';
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
