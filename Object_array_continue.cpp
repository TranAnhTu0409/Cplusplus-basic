#include<bits/stdc++.h>

using namespace std;

class Book {
	private:
		string codeBook, titleBook, publisher;
		int pages;
		double price;
	public:
		void input();
		void output();
};

void Book::input() {
	cout << "\nEnter code book: ";
	getline(cin >> ws, codeBook);
	cout << "\nEnter title book: ";
	getline(cin >> ws, titleBook);
	cout << "\nEnter publisher: ";
	getline(cin >> ws, publisher);
	cout << "\nEnter pages: ";
	cin >> pages;
	cout << "\nEnter price of book: ";
	cin >> price;	
}

void Book::output() {
	cout << setw(25) << codeBook << setw(25) << titleBook << setw(25) << publisher << setw(25) << pages << setw(25) << price << endl;
}

main() {
	Book *b;
	cout << "\n	ENTER INFORMATION OF BOOK" << endl;
	int number;
	cout << "\nEnter number of book: ";
	cin >> number;
	b = new Book[number];
	for(int i = 0; i < number; i++) {
		cout << "\nBook " << i + 1 << endl;
		b[i].input();
	}
	cout << "\nDISPLAY BOOK DETAIL" << endl;
	cout << setw(25) << "CODE BOOK" << setw(25) << "TITLE" << setw(25) << "PUBLISHER" << setw(25) << "PAGES" << setw(25) << "PRICE" << endl;
	for(int i = 0; i < number; i++) {
		b[i].output();
	}
	return 0;
}
