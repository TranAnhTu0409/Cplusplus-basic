#include<bits/stdc++.h>
#define MAX 20
using namespace std;

int n;
int Bool[MAX] = {0}; // tat cac cac phan tu duoc danh dau la chua duoc su dung (co gia tri = 0)
int A[MAX]; // luu hoa vi vao mang A

void xuat() {
	for(int i = 1; i <= n; i++) {
		cout << A[i] << " ";
	}
			cout << endl;
}

void Try(int k) {
	for(int i = 1; i <= n; i++) {
		// kiem tra neu phan tu chua duoc chon thi se danh dau
		if(Bool[i] == 0) {  // if (Bool[i] == false)
			A[k] = i; // luu 1 phan tu vao hoan vi
			Bool[i] = 1; // danh dau da dung
			if(k == n) // kiem tra neu hoan vi da hoan thanh thi in ra hoan vi da duoc tao
				xuat();
			else
				Try(k + 1);
			Bool[i] = 0;
		}
	}
}
main() {
	cout << "\nNhap n: ";
	cin >> n;
	Try(1);
	return 0;
} 
