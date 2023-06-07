#include <iostream>
#include <string>

using namespace std;

int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int modNghichDao(int a, int m) {
    for (int x = 1; x < m; x++) {
        if ((a * x) % m == 1) {
            return x;
        }
    }
    return -1;
}

string affineCipherMaHoa(const string& banRo, int a, int b) {
    string banMa;

    int m = 26;  
	// dam bao a va m la nguyen to cung nhau
    if (ucln(a, m) != 1) {
        cout << "Khoa khong hop le!" << endl;
        return banMa;
    }

    for (char c : banRo) {
        if (isalpha(c)) {
            int soKyTu = toupper(c) - 'A';
            int soKyTuMaHoa = (a * soKyTu + b) % m;
            char kyTuMaHoa = soKyTuMaHoa + 'A';
            banMa += kyTuMaHoa;
        } else {
            banMa += c;
        }
    }

    return banMa;
}

int main() {
    string banRo;
    cout << "Nhap chuoi can ma hoa: ";
    getline(cin, banRo);

    int a, b;
    cout << "Nhap khoa a: ";
    cin >> a;
    cout << "Nhap khoa b: ";
    cin >> b;
    string vanBanMaHoa = affineCipherMaHoa(banRo, a, b);
    cout << "Chuoi ma hoa: " << vanBanMaHoa << endl;
    return 0;
}

