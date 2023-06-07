#include <iostream>
#include <string>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int modInverse(int a, int m) {
    for (int x = 1; x < m; x++) {
        if ((a * x) % m == 1) {
            return x;
        }
    }
    return -1;
}

string affineCipherEncrypt(const string& plaintext, int a, int b) {
    string ciphertext;

    int m = 26;  // So chu cai trong bang chu cai Tieng Anh

    // Dam bao a va m nguyen to cung nhau
    if (gcd(a, m) != 1) {
        cout << "Khóa không h?p l?!" << endl;
        return ciphertext;
    }

    // Ma hoa tung ky tu trong plaintext
    for (char c : plaintext) {
        if (isalpha(c)) {
            // Chuuyen ky tu thanh chu trong bang chu cai
            int charNum = toupper(c) - 'A';

            // Ap dung cong thuc ma hoa affine cipher
            int encryptedCharNum = (a * charNum + b) % m;

            // Chuyen so thanh ky tu trong bang chu cai
            char encryptedChar = encryptedCharNum + 'A';

            ciphertext += encryptedChar;
        } else {
            ciphertext += c;
        }
    }

    return ciphertext;
}

int main() {
    string plaintext;
    cout << "Nhuoi can ma hoa: ";
    getline(cin, plaintext);

    int a, b;
    cout << "Nh?p khóa a: ";
    cin >> a;
    cout << "Nh?p khóa b: ";
    cin >> b;

    string ciphertext = affineCipherEncrypt(plaintext, a, b);

    cout << "Chu?i mã hóa: " << ciphertext << endl;

    return 0;
}

