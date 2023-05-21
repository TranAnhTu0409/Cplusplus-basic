#include<bits/stdc++.h>

using namespace std;

class Student {
	string ID, fullName;
	double mathScore, physicsScore, chemistryScore;
	public:
		void input();
		void output();
		friend void arrange(Student *a, int n);
};

void Student::input() {
	cout << "\nEnter student ID: ";
	getline(cin >> ws, ID);
	cout << "\nEnter full name student: ";
	getline(cin >> ws, fullName);
	cout << "\nEnter math score: ";
	cin >> mathScore;
	cout << "\nEnter physics score: ";
	cin >> physicsScore;
	cout << "\nEnter chemistry score: ";
	cin >> chemistryScore;	
}

void Student::output() {
	cout << setw(25) << ID;
	cout << setw(25) << fullName;
	cout << setw(25) << mathScore;
	cout << setw(25) << physicsScore;
	cout << setw(25) << chemistryScore;
	cout << setw(25) << mathScore + physicsScore + chemistryScore << endl;
}

void arrange(Student *a, int n) {
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if((a[i].mathScore + a[i].physicsScore + a[i].chemistryScore) > (a[j].mathScore + a[j].physicsScore + a[j].chemistryScore)) {
				swap(a[i], a[j]);
			}
		}
	}
}

main() {
	Student *x;
	cout << "\nENTER INFORMATION OF STUDENT" << endl;
	int n;
	cout << "\nEnter number of student: ";
	cin >> n;
	x = new Student[n];
	for(int i = 0; i < n; i++) {
		cout << "\nStudent: " << i + 1 << endl;
		x[i].input();
	}
	arrange(x, n);
	cout << "\nDISPLAY DETAIL OF STUDENT" << endl;
	cout << setw(25) << "STUDENT ID";
	cout << setw(25) << "FULL NAME";
	cout << setw(25) << "MATH SCORE";
	cout << setw(25) << "PHYSICS SCORE";
	cout << setw(25) << "CHEMISTRY SCORE";
	cout << setw(25) << "TOTAL SCORE" << endl;
	for(int i = 0; i < n; i++) {
		x[i].output();
	}
	return 0;
}
