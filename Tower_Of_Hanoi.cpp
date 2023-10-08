#include<iostream>

using namespace std;

void Tower(int num , char a, char b, char c ) {
	if(num == 1) {
		cout << "\t" << a <<"-->"<< c<< endl;
		return;
	}
	Tower(num - 1, a, c, b);
	Tower(1, a, b, c);
	Tower(num - 1, b, a, c);
}
int main() {
	char a = 'A', b = 'B', c = 'C';
	int n;
	cout << "Enter num: ";
	cin >> n;
	Tower(n, a, b, c);
}
