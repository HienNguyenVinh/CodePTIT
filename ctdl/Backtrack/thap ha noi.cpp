#include<bits/stdc++.h>

using namespace std;

void move(char a, char b){
	cout << a << " -> " << b << endl;
}
void thapHn(int n, char a, char b, char c){
	if(n == 1){
		move(a,c);
	}else{
		thapHn(n-1,a,c,b);
		move(a,c);
		thapHn(n-1,b,a,c);
	}
}
int main(){
	int n;
	cin >> n;
	char a='A', b='B', c='C';
	thapHn(n,a,b,c);
	return 0;
}
