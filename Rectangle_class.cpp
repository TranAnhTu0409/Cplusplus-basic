#include<bits/stdc++.h>

using namespace std;

class Rectangle {
	private:
		double length;
		double width;
	public:
		void input();
		void output();
		double getArea();
		double getPerimeter();
};

void Rectangle::input() {
	cout << "\nEnter length of rectangle: ";
	cin >> length;
	cout << "\nEnter width of rectangle: ";
	cin >> width;
}

double Rectangle::getArea() {
	return length * width;
}

double Rectangle::getPerimeter() {
	return (length + width) * 2;
}

void Rectangle::output() {
	cout << setw(15) << "The area of rectangle: " << length * width << endl;
	cout << setw(15) << "The perimeter of rectangle: " << (length + width) * 2 << endl;
}

main() {
	Rectangle r;
	cout << "ENTER SPECIFICATION OF RECTANGLE" << endl;
	r.input();
	cout << "\nDISPLAY" << endl;
	r.output();
	return 0;
}
