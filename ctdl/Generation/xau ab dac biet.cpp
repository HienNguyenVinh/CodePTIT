#include<bits/stdc++.h>

using namespace std;

vector<string> b;
void in(int *a, int n){
	string x = "";
	for(int i=1; i<=n; ++i){
		x = x+char(a[i]+'A');
	}
	b.push_back(x);
}
void sinh(int*a, int n, int &ok){
	int i=n;
	while(i>=0 && a[i]==1){
		--i;
	}
	if(i==0){
		ok = 0;
	}else{
		a[i] =1;
		for(int j=i+1; j<=n; ++j){
			a[j] = 0;
		}
	}
}
int main(){
	int n,k;
	cin >> n >> k;
	int a[n+1];
	string s = "";
	for(int i=0; i<k; ++i){
		s+="A";
	}
	for(int i=1; i<=n; ++i){
		a[i] = 0;
	}
	int ok =1;

	while(ok){
		in(a,n);
		sinh(a,n,ok);
	}
	for(string x:b){
		int index = x.find(s);
		if(index != string::npos){
			index = x.find(s,index+1);
			if(index == string::npos){
				cout << x << endl;
			}
		}
	}
	return 0;
}
