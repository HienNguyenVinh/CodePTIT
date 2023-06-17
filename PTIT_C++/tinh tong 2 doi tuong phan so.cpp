#include<bits/stdc++.h>

using namespace std;

class PhanSo{
	private:
		long long t,m;
	public:
		PhanSo(int ,int);
		friend istream& operator >> (istream &in, PhanSo &a);
		friend ostream& operator << (ostream &out, PhanSo a);
		void rutgon();
		friend PhanSo operator + (PhanSo a, PhanSo b);
};

PhanSo::PhanSo(int a,int b){
	this->t = a;
	this->m = b;
}
istream& operator >> (istream &in, PhanSo &a){
	in >> a.t >> a.m;
	return in;
}
ostream& operator << (ostream &out, PhanSo a){
	out << a.t << "/" << a.m;
	return out;
}
void PhanSo::rutgon(){
	long long a=this->t, b=this->m;
	long long tmp;
	while(b!=0){
		tmp = a%b;
		a=b;
		b=tmp;
	}
	this->t /= a;
	this->m /= a;
}
PhanSo operator + (PhanSo a, PhanSo b){
	PhanSo s(1,1);
	s.t = a.t*b.m + a.m*b.t;
	s.m = a.m*b.m;
	s.rutgon();
	return s;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
