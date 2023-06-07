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

    if (ucln(a, m) != 1) {
        cout << "Khoá không h?p l?!" << endl;
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
    cout << "Nh?p khoá a: ";
    cin >> a;
    cout << "Nh?p khoá b: ";
    cin >> b;
    string vanBanMaHoa = affineCipherMaHoa(banRo, a, b);
    cout << "Chu?i mã hóa: " << vanBanMaHoa << endl;
    return 0;
}

