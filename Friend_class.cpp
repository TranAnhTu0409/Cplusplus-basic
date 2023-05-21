#include<bits/stdc++.h>

using namespace std;

class NSX {
	string maNSX, tenNSX, dcNSX;
	public:
		void input();
		void output();
		friend class Hang;
};

class Hang {
	string maHang, tenHang;
	double donGia, trongLuong;
	NSX x;
	public:
		void input();
		void output();
};

void Hang::input() {
	cout << "\nNhap ma hang: ";
	getline(cin >> ws, maHang);
	cout << "\nNhap ten hang: ";
	getline(cin >> ws, tenHang);
	cout << "\nNhap don gia: ";
	cin >> donGia;
	cout << "\nNhap trong luong: ";
	cin >> trongLuong;
	cout << "\nNhap ma nsx: ";
	getline(cin >> ws, x.maNSX);
	cout << "\nNhap ten nsx: ";
	getline(cin >> ws, x.tenNSX);
	cout << "\nNhap dia chi nsx: ";
	getline(cin >> ws, x.dcNSX);	
}

void Hang::output() {
	cout << setw(25) << maHang;
	cout << setw(25) << tenHang;
	cout << setw(25) << donGia;
	cout << setw(25) << trongLuong;
	cout << setw(25) << x.maNSX;
	cout << setw(25) << x.tenNSX;
	cout << setw(25) << x.dcNSX << endl;
}

main() {
	Hang *x;
	cout << "\nNHAP THONG TIN " << endl;
	int n;
	cout << "\nNhap so hang: ";
	cin >> n;
	x = new Hang[n];
	for(int i = 0; i < n; i++) {
		x[i].input();
	}
	cout << "\nHIEN THI" << endl;
		cout << setw(25) << "MA HANG";
	cout << setw(25) << "TEN HANG";
	cout << setw(25) << "DON GIA";
	cout << setw(25) << "TRONG LUONG";
	cout << setw(25) << "MA NSX";
	cout << setw(25) << "TEN NSX";
	cout << setw(25) << "DC NSX" << endl;
	for(int  i = 0; i < n; i++) {
		x[i].output();
	}
	return 0;
}
