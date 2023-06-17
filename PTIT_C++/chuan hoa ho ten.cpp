//#include<bits/stdc++.h>
//
//using namespace std;
//
//char toUpper(char x){
//	if(x>='a' && x<='z'){
//		return char(x-32);
//	}
//}
//char toLower(char x){
//	if(x>='A' && x<='Z'){
//		return char(x+32);
//	}
//}
//string ch(string a){
//	a[0] = toUpper(a[0]);
//	for(int i=1; i<a.length(); ++i){
//		a[i] = toLower(a[i]);
//	}
//	return a;
//}
//void out(string a[10],int n, int k){
//	if(k==1){
//		cout << a[n-1] << " ";
//		for(int i=0; i<n-2; ++i){
//			cout << a[i] << " ";
//		}
//		cout << a[n-2];
//		cout << endl;
//	}else{
//		for(int i=1; i<n; ++i){
//			cout << a[i] << " ";
//		}
//		cout << a[0];
//		cout << endl;
//	}
//	
//}
//int main(){
//	int t;
//	cin >> t;
//	while(t--){
//		int n;
//		cin >> n;
//		cin.ignore();
//		string s;
//		getline(cin,s);
//		string a[10];
//		stringstream ss(s);
//		string tmp;
//		int cnt = 0;
//		while(ss >> tmp){
//			a[cnt++] = ch(tmp);
//		}
//		out(a,cnt,n);
//	}
//	return 0;
//}

#include<bits/stdc++.h> 
using namespace std; 

void chuan (string s, int n){ 
	for (int i=0; i<s.size(); i++){ 
		s[i]=tolower(s[i]); 
	} 
	stringstream ss(s); 
	string tmp, chuan; 
	string name; 
	while (ss>>tmp){ 
		tmp[0]=toupper(tmp[0]); 
		chuan=chuan+tmp+" "; 
	} 
	chuan.erase(chuan.size()-1, 1); 
	if (n==1){ 
		while (chuan[chuan.size()-1]!=' ') chuan.erase(chuan.size()-1, 1); 
		chuan=tmp+" "+chuan; 
	} else{ 
		stringstream t(chuan); 
		t>>tmp; 
		while (chuan[0]!=' ') 
		chuan.erase(0,1); 
		chuan.erase(0,1); 
		chuan=chuan+" "+tmp; 
	} 
	cout<<chuan<<endl; 
} 
int main(){ 
	int t; 
	cin>>t; 
	while (t--){ 
		string s; 
		int n; 
		cin>>n; 
		cin.ignore(); 
		getline (cin, s); 
		chuan(s, n); 
	} 
}
