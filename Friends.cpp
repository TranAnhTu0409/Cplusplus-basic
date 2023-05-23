#include<bits/stdc++.h>

using namespace std;

class Product;
class Date {
	int day, month, year;
	public:
		void input();
		void output();
		friend class Product;
		friend void print(Product a[], int n);
};

class Product {
	string productCode, productName;
	Date date;
	public:
		void input();
		void output();
		friend void print(Product a[], int n);
};
void Product::input() {
	cout << "\nEnter product code: ";
	getline(cin >> ws, productCode);
	cout << "\nEnter product name: ";
	getline(cin >> ws, productName);
	cout << "\nEnter day: ";
	cin >> date.day;
	cout << "\nEnter month: ";
	cin >> date.month;
	cout << "\nEnter year: ";
	cin >> date.year;
}
void Product::output() {
	cout << "\nPRODUCT CODE: " << productCode;
	cout << "\nPRODUCT NAME: " << productName;
	cout << "\nDATE: " << date.day << "/" << date.month << "/" << date.year << endl;
}
void print(Product a[], int n) {
	for(int i = 0; i < n; i++) {
		if(a[i].date.year == 2017) {
			a[i].output();
		}
	}
}
main() {
	Product *x;
	cout << "\nENTER INFORMATION OF PRODUCT" << endl;
	int n;
	cout << "\nEnter number of product: ";
	cin >> n;
	x = new Product[n];
	for(int i = 0; i < n; i++) {
		cout << "\nProduct " << i + 1 << endl;
		x[i].input();
	}
	cout << "\nDISPLAY DETAIL OF PRODUCT " << endl;
	for(int i = 0; i < n; i++) {
		x[i].output();
	}
	print(x, n);
	return 0;
}
