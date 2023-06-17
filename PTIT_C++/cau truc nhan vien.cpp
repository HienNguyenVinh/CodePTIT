#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	string maNv,name,sex,dateOfBirth,address,tax,contractDate;
};
void nhap(NhanVien &a){
	a.maNv = "00001";
	getline(cin,a.name);
	cin >> a.sex >> a.dateOfBirth;
	cin.ignore();
	getline(cin,a.address);
	cin >> a.tax >> a.contractDate;
}
void in(NhanVien a){
	cout << a.maNv << " " << a.name << " " << a.sex << " " << a.dateOfBirth << " " << a.address << " " << a.tax << " " << a.contractDate;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
