#include<iostream>
#include<cmath>

using namespace std;

bool isPrime(int num) {
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

void findPrimes(int start, int end) {
	cout << "\nPrime number from " << start << " to " << end << " is: ";
	for(int num = start; num <= end; num++) {
		if(isPrime(num)) {
			cout << num << " ";
		}
	}
	cout << endl;
}
main() {
	int start, end;
	cout << "\nEnter start: "; cin >> start;
	cout << "\nEnter end: "; cin >> end;
	
	findPrimes(start, end);
	return 0;
}
