#include<bits/stdc++.h>

using namespace std;

int cnt = 0;
class SinhVien{
	private:
		string masv, ten, lop, ns;
		float gpa;
	public: 
		SinhVien();
		friend istream& operator >> (istream &nhap, SinhVien &a);
		friend ostream& operator << (ostream &xuat, SinhVien a);
};
SinhVien::SinhVien() {
	this->ten = this->lop = this->masv = this->ns = "";
	this->gpa = 0;
}

istream& operator >> (istream &nhap, SinhVien &a){
	++cnt;
	string tmp = to_string(cnt);
	a.masv = "B20DCCN" + string(3-tmp.size(),'0') + tmp;
	nhap.ignore();
	getline(nhap, a.ten);
	nhap >> a.lop >> a.ns >> a.gpa;
	if(a.ns[2] != '/') {
		a.ns = "0" + a.ns;
	}
	if(a.ns[5] != '/') {
		a.ns.insert(3,"0");
	}
	return nhap;
}
ostream& operator << (ostream &xuat, SinhVien a){
	xuat << a.masv << " " << a.ten << " " << a.lop << " " << a.ns << " ";
	xuat << fixed << setprecision(2) << a.gpa << endl;
	return xuat;
}
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}

