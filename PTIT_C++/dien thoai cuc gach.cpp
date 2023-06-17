#include<bits/stdc++.h>

using namespace std;

int convert(char x){
	if((x>='A' && x <= 'C') || (x>='a' && x<='c')){
		return 2;
	} 
	if((x>='D' && x <= 'F') || (x>='d' && x<='f')){
		return 3;
	} 
	if((x>='G' && x <= 'I') || (x>='g' && x<='i')){
		return 4;
	} 
	if((x>='J' && x <= 'L') || (x>='j' && x<='l')){
		return 5;
	} 
	if((x>='M' && x <= 'O') || (x>='m' && x<='o')){
		return 6;
	} 
	if((x>='P' && x <= 'S') || (x>='p' && x<='s')){
		return 7;
	} 
	if((x>='T' && x <= 'V') || (x>='t' && x<='v')){
		return 8;
	} 
	if((x>='W' && x <= 'Z') || (x>='w' && x<='z')){
		return 9;
	} 
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		int a[n];
		for(int i=0; i<n; ++i){
			a[i] = convert(s[i]);
		}
		int check = 1;
		for(int i=0; i<=n/2; ++i){
			if(a[i] != a[n-1-i]){
				check = 0;
				break;
			}
		}
		if(check){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
