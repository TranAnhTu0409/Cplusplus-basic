#include<bits/stdc++.h>

using namespace std;

class Array {
	private:
		int n; // size of array
		int *arr;
	public:
		void intput();
		void arrange();
		double findMin();
		double findMax();
		void output();
};

void Array::intput() {
	cout << "\nEnter size of array: ";
	cin >> n;
	arr = new int[n];
	for(int i = 0; i < n; i++) {
		cout << "arr[" << i + 1 << "] = ";
		cin >> arr[i];
	}
}

void Array::arrange() {
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(arr[i] > arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
}

double Array::findMin() {
	int min = arr[0];
	for(int i = 0; i < n; i++) {
		if(min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}

double Array::findMax() {
	int max = arr[0];
	for(int i = 0; i < n; i++) {
		if(max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}

void Array::output() {
	cout << "\nArray afeter arrange: " << endl;
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\nMinimum of array: " << findMin();
	cout << "\nMaximum of array: " << findMax();
}

main() {
	Array x;
	cout << "\nENTER DETAIL OF ARRAY" << endl;
	x.intput();
	cout << "\nDISPLAY ARRAY" << endl;
	x.arrange();
	x.findMin();
	x.findMax();
	x.output();	
	return 0;
}
