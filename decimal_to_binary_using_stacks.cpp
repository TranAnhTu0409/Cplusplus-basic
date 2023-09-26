#include<bits/stdc++.h>

using namespace std;

void dec_to_bin(int number) {
	stack<int> st;
	while(number > 0) {
		int rem = number % 2;   // take remainder
		number /= 2;
		st.push(rem);
	}
	while(!st.empty()) {
		int item;
		item = st.top();
		st.pop();
		cout << item;
	}
}
main() {
	int num;
	cout << "\nEnter a number: ";
	cin >> num;
	dec_to_bin(num);
	return 0;
}
