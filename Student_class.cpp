#include<bits/stdc++.h>

using namespace std;
class SinhVien {
	string maSV, hoTen;
	int tuoi;
	double diem;
	public:
	void nhap();
	void xuat();
};
void SinhVien::nhap() {
	cout << "Nhap ma sinh vien: ";
	getline(cin >> ws, maSV);
	cout << "\nNhap ho va ten sinh vien: ";
	getline(cin >> ws, hoTen);
	cout << "\nNhap tuoi: ";
	cin >> tuoi;
	cout << "\nNhap diem: ";
	cin >> diem;
}
void SinhVien::xuat() {
	cout << setw(25) << maSV << setw(25) << hoTen << setw(25) << tuoi << setw(25) << diem << endl;
}
main() {
	SinhVien *sv;
	cout << "\nNHAP THONG TIN SINH VIEN" << endl;
	int n;
	cout << "\nNhap so luong sinh vien: ";
	cin >> n;
	sv = new SinhVien[n];
	for(int i = 0; i < n; i++) {
		cout << "\nNhap sinh vien thu " << i + 1 << endl;
		sv[i].nhap();
	}
	cout << "\nHIEN THI THONG TIN SINH VIEN" << endl;
	cout << setw(25) << "MA SV" << setw(25) << "HO TEN" << setw(25) << "TUOI" << setw(25) << "DIEM" << endl;
	for(int i = 0; i < n; i++) {
		sv[i].xuat();
	}
	return 0;
}
