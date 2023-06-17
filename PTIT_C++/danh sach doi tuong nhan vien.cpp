#include<bits/stdc++.h>

using namespace std;

int cnt = 0;

class NhanVien {
	private:
		string ten,gt,ns,dc,tax,hd;
		int ma;
	public:
		friend istream &operator >> (istream &in, NhanVien &a){
			++cnt;
			a.ma = cnt;
			in.ignore();
			getline(in, a.ten);
			in >> a.gt >> a.ns;
			in.ignore();
			getline(in,a.dc);
			in >> a.tax >> a.hd;
			return in;
		}
		friend ostream &operator << (ostream &out, NhanVien a){
			out << setfill('0') << setw(5) << a.ma << " ";
			out << a.ten << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.tax << " " << a.hd << endl;
			return out;			
		}
};

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

//3
//Nguyen Van A
//Nam
//10/22/1982
//Mo Lao-Ha Dong-Ha Noi
//8333012345
//31/12/2013
//Ly Thi B
//Nu
//10/15/1988
//Mo Lao-Ha Dong-Ha Noi
//833301234
//22/08/2011
//Hoang Thi C
//Nu
//04/02/1981
//Mo Lao-Ha Dong-Ha Noi
//8333012347
//22/08/2011
