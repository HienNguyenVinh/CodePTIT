#include<bits/stdc++.h>

using namespace std;

class sv {
	private:
		string ma,ten,lop,email;
	public:
		friend istream &operator >> (istream &in, sv &a){
			in >> a.ma;
			in.ignore();
			getline(in,a.ten);
			in >> a.lop >> a.email;
			return in;
		}
		friend ostream &operator << (ostream &out, sv a){
			out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
			return out;
		}
		string getLop(){
			return this->lop;
		}
};

int main(){
	int n;
	cin >> n;
	sv a[n];
	for(int i=0; i<n; ++i){
		cin >> a[i];
	}
	int q;
	cin >> q;
	while(q--){
		string cls;
		cin >> cls;
		cout << "DANH SACH SINH VIEN LOP "<< cls << ":" << endl;
		for(int i=0; i<n; ++i){
			if(a[i].getLop() == cls){
				cout << a[i];
			}
		}
	}
}
//4
//B16DCCN011
//Nguyen Trong Duc Anh
//D16CNPM1
//sv1@stu.ptit.edu.vn
//B15DCCN215
//To Ngoc Hieu
//D15CNPM3
//sv2@stu.ptit.edu.vn
//B15DCKT150
//Nguyen Ngoc Son
//D15CQKT02-B
//sv3@stu.ptit.edu.vn
//B15DCKT199
//Nguyen Trong Tung
//D15CQKT02-B
//sv4@stu.ptit.edu.vn
//
//1
//D15CQKT02-B
