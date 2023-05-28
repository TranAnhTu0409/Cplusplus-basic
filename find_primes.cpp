#include<iostream>
#include<cmath>

using namespace std;

bool IsPrime(int num) {
	if(num < 2) {
		return false;
	}
	
	for(int i = 2; i <= sqrt(num); i++) {
		if(num % i == 0) {
			return false;
		}
	}
	return true;
}

void FindPrimes(int start, int end) {
	cout << "\nPrime number from " << start << " to " << end << " is: ";
	for(int num = start; num <= end; num++) {
		if(IsPrime(num)) {
			cout << num << " ";
		}
	}
	cout << endl;
}
main() {
	int start, end;
	cout << "\nEnter start: "; cin >> start;
	cout << "\nEnter end: "; cin >> end;
	
	FindPrimes(start, end);
	return 0;
}
