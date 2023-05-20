#include<bits/stdc++.h>

using namespace std;

class NSX {
	string maNSX, tenNSX, dcNSX;
	public:
		void input();
		void output();
};

class Hang {
	string maHang, tenHang;
	NSX x;
	public:
		void input();
		void output();
};

void NSX::input() {
	cout << "\nEnter ma NSX: ";
	getline(cin >> ws, maNSX);
	cout << "\nEnter ten NSX: ";
	getline(cin >> ws, tenNSX);
	cout << "\nEnter dia chi NSX: ";
	getline(cin >> ws, dcNSX);
}

void NSX::output() {
	cout << setw(25) << maNSX << setw(25) << tenNSX << setw(25) << dcNSX << endl;
}

void Hang::input() {
	cout << "\nEnter ma hang: ";
	getline(cin >> ws, maHang);
	cout << "\nEnter ten hang: ";
	getline(cin >> ws, tenHang);
	x.input();
}

void Hang::output() {
	cout << setw(25) << maHang << setw(25) << tenHang << setw(25);
	x.output();
	cout << endl;
}

main() {
	Hang *h;
	cout << "\nENTER INFORMATION OF PRODUCT" << endl;
	int n;
	cout << "\nEnter number of product: ";
	cin >> n;
	h = new Hang[n];
	for(int i = 0; i < n; i++) {
		cout << "Product number " << i + 1 << endl;
		h[i].input();
	}
	cout << "\nDISPLAY DETAIL OF PRODUCT" << endl;
	cout << setw(25) << "MA HANG" << setw(25) << "TEN HANG " << setw(25) << "MA NSX" << setw(25) << "TEN NSX" << setw(25) << "DC NSX" << endl;
	for(int i = 0; i < n; i++) {
		h[i].output();
	}
	return 0;
}
