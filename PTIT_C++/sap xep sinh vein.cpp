#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string ma,ten,sdt,email;
};

bool cmp(SinhVien a, SinhVien b){
	if(a.ten == b.ten){
		return a.ma < b.ma;
	}
	return a.ten < b.ten;
}
int main(){
	int n;
	cin >> n;
	SinhVien a[n];
	for(int i=0; i<n; ++i){
		cin >> a[i].ma;
		cin.ignore();
		getline(cin,a[i].ten);
		cin >> a[i].sdt >> a[i].email;
	}
	sort(a,a+n,cmp);
	for(int i=0; i<n; ++i){
		cout << a[i].ma << " " << a[i].ten << " " << a[i].sdt << " " << a[i].email << endl;
	}
	return 0;
}
