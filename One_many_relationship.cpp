#include<bits/stdc++.h>

using namespace std;

class Product {
	string productCode, productName;
	double unitPrice;
	public:
		void input();
		void output();
};

void Product::input() {
	cout << "\nEnter product code: ";
	getline(cin >> ws, productCode);
	cout << "\nEnter product name: ";
	getline(cin >> ws, productName);
	cout << "\nEnter unit price: ";
	cin >> unitPrice;	
}

void Product::output() {
	cout << setw(25) << productCode << setw(25) << productName << setw(25) << unitPrice << endl;
}

class Invoice {
	string invoiceCode;
	Product *x;
	int n;
	public:
		void input();
		void output();
};

void Invoice::input() {
	cout << "\nEnter invoice code: ";
	getline(cin >> ws, invoiceCode);
	cout << "\nEnter number of product: ";
	cin >> n;
	x = new Product[n];
	for(int i = 0; i < n; i++) {
		cout << "\nProduct number " << i + 1 << endl;
		x[i].input();
	}
}

void Invoice::output() {
	cout << "\nInvoice code: " << invoiceCode << endl;
	cout << setw(25) << "PRODUCT CODE" << setw(25) << "PRODUCT NAME" << setw(25) << "UNIT PRICE" << endl;
	for(int i = 0; i < n; i++) {
		x[i].output();
	}
}

main() {
	Invoice a;
	a.input();
	cout << "\nINVOICE DETAIL" << endl;
	a.output();
	return 0;
}
