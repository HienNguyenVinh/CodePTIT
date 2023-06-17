#include<bits/stdc++.h>

using namespace std;

struct giaoVien{
	string ma, ten;
	long long luongCb,thuNhap;
	int bacLuong,phuCap;
};
int main(){
	giaoVien a;
	cin >> a.ma;
	cin.ignore();
	getline(cin,a.ten);
	cin >> a.luongCb;
	
	a.bacLuong = int(a.ma[2]-'0')*10 + int(a.ma[3]-'0');
	if(a.ma[0] == 'H'){
		if(a.ma[1] == 'T'){
			a.phuCap = 2000000;
		}else{
			a.phuCap = 900000;
		}
	}else{
		a.phuCap = 500000;
	}
	a.thuNhap = a.luongCb*a.bacLuong + a.phuCap;
	
	cout << a.ma << " " << a.ten << " " << a.bacLuong << " " << a.phuCap << " " << a.thuNhap;
	return 0;
}
