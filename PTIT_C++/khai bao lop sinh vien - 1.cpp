#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string ten,lop,masv,ns;
		float gpa;
	public:
		SinhVien();
		void nhap();
		void xuat();	
};

SinhVien::SinhVien(){
	this->masv = this->ten = this->lop = this->ns = "";
	this->gpa = 0;
}
void SinhVien::nhap(){
	getline(cin,this->ten);
	cin >> this->lop >> this->ns >> gpa;
	this->masv = "B20DCCN001";
}
void SinhVien::xuat(){
	cout << this->masv << " " << this->ten << " " << this->lop << " ";
	string a[3],tmp;
	int i = 0;
	stringstream ss(this->ns);
	while(getline(ss,tmp,'/')){
		a[i++] = tmp;
	}
	if(a[0].size() == 1){
		cout << "0" << a[0] << "/";
	}else{
		cout << a[0] << "/";
	}
	if(a[1].size() == 1){
		cout << "0" << a[1] << "/";
	}else{
		cout << a[1] << "/";
	}
	cout << a[2] << " ";	
	cout << fixed << setprecision(2) << this->gpa;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
