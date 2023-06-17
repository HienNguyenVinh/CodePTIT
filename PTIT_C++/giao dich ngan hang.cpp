#include<bits/stdc++.h>

using namespace std;

string tong(string a, string b){
	while(a.size()<b.size()){
		a = "0"+a;
	}
	while(b.size()<a.size()){
		b = "0"+b;
	}
	if(a<b){
		swap(a,b);
	}
	string s;
	int nho = 0;
	int n = a.size() - 1;
	for(int i=n; i>=0; --i){
		int tmp = int(a[i]-'0') + int(b[i]-'0') + nho;
		if(tmp > 9){
			tmp -= 10;
			s = char(tmp+'0') + s;
			nho = 1;
		}else{
			s=char(tmp+'0') + s;
			nho = 0;
		}
	}
	if(nho == 1){
		s = "1"+s;
	}
	return s;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s,tt;
		getline(cin,s);
		int n;
		cin >> n;
		cin.ignore();
		getline(cin,tt);
		stringstream ss(tt);
		string tmp;
		string tieu = "0";
		while(ss >> tmp){
			if(tmp[0] == '-'){
				tmp = tmp.substr(1,tmp.size());
				tieu = tong(tieu,tmp);
			}
		}
		if(tieu.size() < 9){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}
	return 0;
}
