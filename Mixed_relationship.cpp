#include<bits/stdc++.h>

using namespace std;

class QuanLy {
	string maQL, hoTen;
	public:
		void input();
		void output();	
};

void QuanLy::input() {
	cout << "\nNhap ma quan ly: ";
	getline(cin >> ws, maQL);
	cout << "\nNhap ho ten quan ly: ";
	getline(cin >> ws, hoTen);	
}

void QuanLy::output() {
	cout << setw(25) << maQL << endl; 
	cout << setw(25) << hoTen << endl;
}

class May {
	string maMay, kieuMay, tinhTrang;
	public:
		void input();
		void output();
};

void May::input() {
	cout << "\nNhap ma may: ";
	getline(cin >> ws, maMay);
	cout << "\nNhap kieu may: ";
	getline(cin >> ws, kieuMay);
	cout << "\nNhap tinh trang may: ";
	getline(cin >> ws, tinhTrang);	
}

void May::output() {
	cout << setw(25) << maMay << setw(25) << kieuMay << setw(25) << tinhTrang << endl;
}

class PhongMay {
	string maPhong, tenPhong;
	double dienTich;
	QuanLy x;
	May *y;
	int n;
	public:
		void input();
		void output();
};

void PhongMay::input() {
	cout << "\nNhap ma phong: ";
	getline(cin >> ws, maPhong);
	cout << "\nNhap ten phong: ";
	getline(cin >> ws, tenPhong);
	cout << "\nNhap dien tich phong: ";
	cin >> dienTich;
	x.input();
	cout <<	"\nNhap so luong may: ";
	cin >> n;
	y = new May[n];
	for(int i = 0; i < n; i++) {
		cout << "\nMay thu " << i + 1 << endl;
		y[i].input();
	}
}

void PhongMay::output() {
	cout << setw(25) << "\nMA PHONG: " << maPhong;
	cout << setw(25) << "\nTEN PHONG: " << tenPhong;
	cout << setw(25) << "\nDIEN TICH: " << dienTich;
	cout << setw(25) << "\nMA QL: ";
	cout << setw(25) << "\nTEN NHA QL: ";
	x.output();
	cout << setw(25) << "MA MAY";
	cout << setw(25) << "KIEU MAY";
	cout << setw(25) << "TINH TRANG" << endl;
	for(int i = 0; i < n; i++) {
		y[i].output();
	}
}

main() {
	PhongMay a;
	cout << "\nNHAP THONG TIN PHONG MAY " << endl;
	a.input();
	cout << "\nHIEN THI THONG TIN PHONG MAY " << endl;
	a.output(); 
	return 0;
}
