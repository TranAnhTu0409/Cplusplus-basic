#include<bits/stdc++.h>
#define MAX 8
using namespace std;
int A[MAX][MAX] = {0}; // Khoi tao mang co gia tri = 0
int X[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int Y[8] = {-1, 1, -2, 2, 2, -2, 1, -1};
int n; // so phan tu cua ban co muon tao
int dem = 0; // so buoc di

// ham xuat
void xuat() {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

// Ham buoc di
void diChuyen(int x, int y) {
    ++dem; // tang gia tri buoc di
    A[x][y] = dem; // danh dau da di
	
	// kiem tra xem quan ma da di het ban co chua
    if (dem == n * n) {
        cout << "Cac buoc di la:\n";
        xuat();
        exit(0); // ket thuc chuong trinh
    }
	
	// neu chua di het ban co thi tao buoc di moi
    for (int i = 0; i < 8; i++) {
        int u = x + X[i]; // tao 1 vi tri x moi
        int v = y + Y[i]; // tao 1 vi tri y moi
        
        // neu hop le thi tien hanh di chuyen
        if (u >= 0 && u < n && v >= 0 && v < n && A[u][v] == 0) {
            diChuyen(u, v);
        }
    }
	// neu khong tim duoc buoc di thi ta phai tra lai cac gia tri ban dau
    --dem;
    A[x][y] = 0;
}


main() {
	cout << "\nNhap n: ";
	cin >> n;
	int a, b;
	cout << "\nNhap vi tri ban dau.\nx: ";
	cin >> a;
	cout << "y: ";
	cin >> b;
	diChuyen(a, b);
	// neu khong tim duoc buoc di thi thong bao
	cout << "\nKhong tim thay duong di";
	return 0;
}
