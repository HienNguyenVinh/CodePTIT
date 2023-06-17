#include<bits/stdc++.h>

using namespace std;

string sub(string a, string b){
	string s;
	int nho = 0;
	int n = a.size() - 1;
	for(int i=n; i>=0; --i){
		int tmp = int(a[i]-'0') - int(b[i]-'0') - nho;
		if(tmp < 0){
			tmp += 10;
			s = char(tmp+'0') + s;
			nho = 1;
		}else{
			s=char(tmp+'0') + s;
			nho = 0;
		}
	}
	return s;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string a,b;
		cin >> a >> b;
		while(a.size()<b.size()){
			a = "0"+a;
		}
		while(b.size()<a.size()){
			b = "0"+b;
		}
		if(a<b){
			swap(a,b);
		}
		cout << sub(a,b) << endl;
	}
	return 0;
}
