#include<iostream>

using namespace std;

void bubbleSort(int arr[], int size) {
	for(int i = 0; i < size - 1; i++) {
		for(int j = 0; j < size - i - 1; j++) {
			if(arr[j] > arr[j + ]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

void printArray(int arr[], int size) {
	for(int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

main() {
	int size;
	cout << "\nEnter the size of the array: ";
	cin >> size;
	
	int arr[size];
	cout << "\nEnter the elements of the array: \n";
	for(int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	
	cout << "Array before sorting: ";
	printArray(arr, size);
	
	bubbleSort(arr, size);
	
	cout << "Array after sorting: ";
	printArray(arr, size);
	return 0;
}
