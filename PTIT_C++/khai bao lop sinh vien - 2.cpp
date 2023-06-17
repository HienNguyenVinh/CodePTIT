#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string masv,ten,lop,ns;
		float gpa;
	public:
		SinhVien();
		friend istream& operator >> (istream &nhap, SinhVien& a);
		friend ostream& operator << (ostream &xuat, SinhVien a);
};
SinhVien::SinhVien(){
	this->masv = this->ten = this->lop = this->ns = "";
	this->gpa = 0;
}

istream& operator >> (istream &nhap, SinhVien &a){
	getline(nhap,a.ten);
	a.masv = "B20DCCN001";
	nhap >> a.lop >> a.ns >> a.gpa;
	return nhap;
}
ostream& operator << (ostream &xuat, SinhVien a){
	xuat << a.masv << " " << a.ten << " " << a.lop << " ";
	stringstream ss(a.ns);
	string tmp;
	string d[3];
	int cnt = 0;
	while(getline(ss,tmp,'/')){
		d[cnt++] = tmp;
	}
	if(d[0].size() == 1){
		xuat << "0" << d[0] << "/";
	}else{
		xuat << d[0] << "/";
	}
	if(d[1].size() == 1){
		xuat << "0" << d[1] << "/";
	}else{
		xuat << d[1] << "/";
	}
	xuat << d[2] << " ";
	xuat << fixed << setprecision(2) << a.gpa;
	return xuat;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
