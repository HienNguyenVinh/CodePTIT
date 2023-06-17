#include<bits/stdc++.h>

using namespace std;

class sv{
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
		string getMa(){
			return this->ma;
		}
};

bool cmp(sv a, sv b){
	return a.getMa() < b.getMa();
}

int main() {
	vector <sv> a;
	sv tmp;
	while(getline(cin,tmp)){
		a.push_back(tmp);
	}
	sort(a.begin(),a.end(),cmp);
	for(sv x:a){
		cout << x;
	}
	return 0;
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
//D15CQKT03-B
//sv4@stu.ptit.edu.vn
