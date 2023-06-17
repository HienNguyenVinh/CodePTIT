#include<bits/stdc++.h>

using namespace std;

class NhanVien{
	private:
		string ma,ten,gt,ns,dc,ms,hd;
	public:
		friend istream& operator >> (istream &in, NhanVien &a);
		friend ostream& operator << (ostream &out, NhanVien a);
};

istream& operator >> (istream &in, NhanVien &a){
	a.ma = "00001";
	getline(in,a.ten);
	in >> a.gt >> a.ns;
	in.ignore();
	getline(in,a.dc);
	in >> a.ms >> a.hd;
	return in;
}
ostream& operator << (ostream &out, NhanVien a){
	cout << a.ma << " " << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a. ms << " " << a.hd;
	return out;
}

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}
