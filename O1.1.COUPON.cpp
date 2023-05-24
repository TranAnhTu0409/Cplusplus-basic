#include<bits/stdc++.h>

using namespace std;

class NCC {
	string maNCC, tenNCC, dcNCC;
	public:
		void input();
		void output();	
};

class Hang {
	string tenHang;
	double donGia, soLuong;
	public:
		void input();
		void output();	
		friend class Phieu;
};

class Phieu {
	string maPhieu, ngayLap;
	NCC x;
	Hang *y;
	int n;
	public:
		void input();
		void output();
};

void NCC::input() {
	cout << "\nNhap ma NCC: ";
	getline(cin >> ws, maNCC);
	cout << "\nNhap ten NCC: ";
	getline(cin >> ws, tenNCC);
	cout << "\nNhap dia chi NCC: ";
	getline(cin >> ws, dcNCC);
}

void NCC::output() {
	cout << setw(25) << "MA NCC: " << maNCC;
	cout << setw(25) << "TEN NCC: " << tenNCC << endl;
	cout << setw(25) << "DIA CHI NCC: " << dcNCC << endl;
}

void Hang::input() {
	cout << "\nNhap ten hang: ";
	getline(cin >> ws, tenHang);
	cout << "\nNhap don gia: ";
	cin >> donGia;
	cout << "\nNhap so luong: ";
	cin >> soLuong;
}

void Hang::output() {
	cout << setw(25) << tenHang;
	cout << setw(25) << donGia;
	cout << setw(25) << soLuong;
	cout << setw(25) << donGia * soLuong << endl;
}

void Phieu::input() {
	cout << "\nNhap ma phieu: ";
	getline(cin >> ws, maPhieu);
	cout << "\nNhap ngay nhap: ";
	getline(cin >> ws, ngayLap);
	x.input();
	cout << "\nNhap so mat hang: ";
	cin >> n;
	y = new Hang[n];
	for(int i = 0; i < n; i++) {
		cout << "\nMat hang thu " << i + 1 << endl;
		y[i].input();
	}
}

void Phieu::output() {
	cout << setw(25) << "MA PHIEU: " << maPhieu;
	cout << setw(25) << "NGAY LAP: " << ngayLap << endl;
	x.output();
	cout << setw(25) << "TEN HANG" << setw(25) << "DON GIA" << setw(25) << "SO LUONG" << setw(25) << "THANH TIEN" << endl;
	for(int i = 0; i < n; i++) {
		y[i].output();
	}
	double tongTien = 0;
	for(int i = 0; i < n; i++) {
		tongTien += y[i].donGia * y[i].soLuong;
	}
	cout << setw(95) << "TONG TIEN: " << tongTien << endl;
}

main() {
	Phieu a;
	cout << "\nNHAP THONG TIN HANG " << endl;
	a.input();
	cout << "\nPHIEU NHAP HANG " << endl;
	a.output();
	return 0;
}
