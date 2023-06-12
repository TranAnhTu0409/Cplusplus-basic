#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string state[5][5];
string cipherkey[5][5];
string sbox[17][17];
string invsbox[17][17];
string rcon[5][11];
int vong = 1;
int mbox[5][5];     // bang nhan mix column
int invmbox[5][5];  // bang nhan inv mix column

// Ham ho tro========================

string Get2FromInt(int n) {
    string da = "";
    while (n > 0) {
        if (n % 2 == 0) {
            da = "0" + da;
        }
        else {
            da = "1" + da;
        }
        n /= 2;
    }
    while (da.length() < 8) {
        da = "0" + da;
    }
    return da;
}

int GetIntFrom2(string s) {
    int da = 0;
    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            da = da + pow(2, n - 1 - i);
        }
    }
    return da;
}

string Get2From16(string sHex) {
    string sReturn = "";
    for (int i = 0; i < sHex.length(); ++i) {
        switch (sHex[i]) {
        case '0': sReturn.append("0000"); break;
        case '1': sReturn.append("0001"); break;
        case '2': sReturn.append("0010"); break;
        case '3': sReturn.append("0011"); break;
        case '4': sReturn.append("0100"); break;
        case '5': sReturn.append("0101"); break;
        case '6': sReturn.append("0110"); break;
        case '7': sReturn.append("0111"); break;
        case '8': sReturn.append("1000"); break;
        case '9': sReturn.append("1001"); break;
        case 'a': sReturn.append("1010"); break;
        case 'b': sReturn.append("1011"); break;
        case 'c': sReturn.append("1100"); break;
        case 'd': sReturn.append("1101"); break;
        case 'e': sReturn.append("1110"); break;
        case 'f': sReturn.append("1111"); break;
        }
    }
    return sReturn;
}

string Get16From2(string sBinary) {
    string rest = "", tmp, chr = "0000";
    int len = sBinary.length() / 4;
    chr = chr.substr(0, len);
    //sBinary = chr + sBinary
        for (int i = 0; i < len; i++) {
        tmp = sBinary.substr(i * 4, 4);
        if (!tmp.compare("0000")) chr = '0';
        else if (!tmp.compare("0001")) chr = '1';
        else if (!tmp.compare("0010")) chr = '2';
        else if (!tmp.compare("0011")) chr = '3';
        else if (!tmp.compare("0100")) chr = '4';
        else if (!tmp.compare("0101")) chr = '5';
        else if (!tmp.compare("0110")) chr = '6';
        else if (!tmp.compare("0111")) chr = '7';
        else if (!tmp.compare("1000")) chr = '8';
        else if (!tmp.compare("1001")) chr = '9';
        else if (!tmp.compare("1010")) chr = 'a';
        else if (!tmp.compare("1011")) chr = 'b';
        else if (!tmp.compare("1100")) chr = 'c';
        else if (!tmp.compare("1101")) chr = 'd';
        else if (!tmp.compare("1110")) chr = 'e';
        else if (!tmp.compare("1111")) chr = 'f';
        rest += chr;
    }
    return rest;
}

// Dich trai chuoi
string dichtrai(string s, int n) {
    int l = s.length();
    string da = s.substr(n, l - n);
    da += s.substr(0, n);
    return da;
}

// Ham nhân hai tren GF(2^8)
int nhantrenGF(int a, int b) {
    int c = 0;
    int dau = 0;
    while (b > 0) {
        if (b % 2 == 1) {
            c = c ^ a;
        }
        dau = a & 0x80;
        a = a << 1;
        if (dau == 0x80) {
            a = a ^ 0x1b;
        }
        b = b >> 1;
    }
    return c;
}

// Các hàm ti?n x? lý========================

// Thuc hien bang sbox
void CreateSBox() {
    int a[8] = { 1, 0, 0, 0, 1, 1, 1, 1 };
    int s[8] = { 1, 1, 0, 0, 0, 1, 1, 0 };
    int b[8] = { 1, 1, 0, 0, 1, 0, 0, 1 };
    int h[8] = { 0, 0, 0, 0, 1, 0, 0, 1 };

    int tich[8][8];
    int nghich[8][8];
    int i, j;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            tich[i][j] = nhantrenGF(a[i], s[j]);
        }
    }
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            nghich[i][j] = nhantrenGF(tich[i][j], b[j]);
        }
    }
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            sbox[i][j] = nghich[i][j] ^ h[j];
        }
    }
}

// Tao bang tuyen tinh
void CreateLinear() {
    int a[8] = { 0, 1, 0, 0, 0, 0, 0, 0 };
    int h[8] = { 0, 0, 0, 0, 1, 0, 0, 1 };
    int tich[8][8];
    int i, j;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            tich[i][j] = nhantrenGF(a[i], h[j]);
        }
    }
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            linear[i][j] = tich[i][j];
        }
    }
}

int main() {
    // T?o b?ng s-box và b?ng tuy?n tính
    CreateSBox();
    CreateLinear();

    string key = "your_key"; // Thay d?i key theo ý mu?n
    string plaintext = "your_plaintext"; // Thay d?i plaintext theo ý mu?n

    // Chuy?n key và plaintext thành d?ng hex
    string keyHex = asciiToHex(key);
    string plaintextHex = asciiToHex(plaintext);

    // In key và plaintext d?ng hex
    cout << "Key (hex): " << keyHex << endl;
    cout << "Plaintext (hex): " << plaintextHex << endl;

    // Th?c hi?n mã hóa
    string ciphertextHex = encrypt(plaintextHex, keyHex);

    // In ciphertext d?ng hex
    cout << "Ciphertext (hex): " << ciphertextHex << endl;

    // Chuy?n ciphertext thành d?ng ascii
    string ciphertextAscii = hexToAscii(ciphertextHex);

    // In ciphertext d?ng ascii
    cout << "Ciphertext (ascii): " << ciphertextAscii << endl;

    return 0;
}


