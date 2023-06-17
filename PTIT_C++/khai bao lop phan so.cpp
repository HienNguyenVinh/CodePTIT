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
	long long a = this->t, b = this->m;
	long long tmp;
	while(b!=0){
		tmp = a%b;
		a= b;
		b= tmp;
	}
	this->t/=a;
	this->m/=a;
}
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
