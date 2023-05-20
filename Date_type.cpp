#include<bits/stdc++.h>

using namespace std;

class Date {
	int day;
	int month;
	int year;
	public:
		void input();
		void output();	
};

class Staff {
	string IDStaff, fullName;
	Date date;
	public:
		void input();
		void output();
};

void Date::input() {
	cout << "\nEnter day: ";
	cin >> day;
	cout << "\nEnter month: ";
	cin >> month;
	cout << "\nEnter year: ";
	cin >> year;
}

void Date::output() {
	cout << day << "/" << month << "/" << year;
}

void Staff::input() {
	cout << "\nEnter ID staff: ";
	getline(cin >> ws, IDStaff);
	cout << "\nEnter full name staff: ";
	getline(cin >> ws, fullName);
	date.input();
}

void Staff::output() {
	cout << setw(25) << IDStaff << setw(25) << fullName << setw(25);
	date.output();
	cout << endl;
}

main() {
	Staff *s;
	cout << "\nENTER INFORMATION OF STAFF";
	int n;
	cout << "\nEnter number of staff: ";
	cin >> n;
	s = new Staff[n];
	for(int i = 0; i < n; i++) {
		cout << "Staff number " << i + 1 << endl;
		s[i].input();
	}
	cout << "\nDISPLAY DETAIL OF STAFF" << endl;
	cout << setw(25) << "ID STAFF" << setw(25) << "FULLNAME" << setw(25) << "BIRTHCAKE" << endl;
	for(int i = 0; i < n; i++) {
		s[i].output();
	}
	return 0;
}
