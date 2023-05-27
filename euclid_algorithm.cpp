#include<iostream>

using namespace std;

// Greatest common divisor (GCD) 
int gcd(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

// Least common multiple
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}
main() {
	int a, b;
	cout << "\nEnter a: ";
	cin >> a;
	cout << "\nEnter b: ";
	cin >> b;
	
	cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b);
	cout << "\nLCM of " << a << " and " << b << " is: " << lcm(a, b);
	return 0;
}
