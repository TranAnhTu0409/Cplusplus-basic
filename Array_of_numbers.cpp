#include<bits/stdc++.h>

using namespace std;

class Array {
	int n;
	int *a;
	public:
		void input();
		void output();
		void arrange();
};

void Array::input() {
	cout << "\nEnter size of array: ";
	cin >> n;
	a = new int[n];
	for(int i = 0; i < n; i++) {
		cout << "a[" << i + 1 << "] = ";
		cin >> a[i];
	}	
}

void Array::output() {
	cout << "\nArray: ";
	for(int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

void Array::arrange() {
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}

main() {
	Array a;
	cout << "\nENTER ARRAY " << endl;
	a.input();
	cout << "\nDISPLAY ARRAY " << endl;
	a.output();
	return 0;
}
