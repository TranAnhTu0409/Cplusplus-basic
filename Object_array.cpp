#include<bits/stdc++.h>

using namespace std;

class Product {
	string 	code, name;
	double unitPrice;
	int quantity;
	public:
		void input();
		void output();
};

void Product::input() {
	cout << "\nEnter code of product: ";
	getline(cin >> ws, code);	
	cout << "\nEnter name of product: ";
	getline(cin >> ws, name);
	cout << "\nEnter unit price of product: ";
	cin >> unitPrice;
	cout << "\nEnter quantity of product: ";
	cin >> quantity;
}

void Product::output() {
	cout << setw(20) << code << setw(20) << name << setw(20) << unitPrice << setw(20) << quantity << endl;	
}

main() {
	Product *p;
	cout << "\nENTER SPECIFICATION OF PRODUCT" << endl;
	int n;
	cout << "\nEnter quantity of product: ";
	cin >> n;
	p = new Product[n];
	for(int i = 0; i < n; i++) {
		cout << "\nEnter specification of product " << i + 1 << endl;
		p[i].input();
	}
	cout << setw(20) << "\nDISPLAY INVOICE" << endl;
	cout << setw(20) << "CODE" << setw(20) << "NAME" << setw(20) << "UNIT PRICE" << setw(20) << "QUANTITY" << endl;
	for(int i = 0; i < n; i++) {
		p[i].output();
	}
	return 0;
}
