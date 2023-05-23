#include <iostream>
#include <string>

using namespace std;

string P = "abcdefghijklmnopqrstuvwxyz";

string mahoa(const string& s, const string& k) {
    string tmp;
    int l = s.length();
    int x = k.length();
    tmp.reserve(l);

    for (int j = 0; j < l; j++) {
        int roso = s[j] - 'a';
        int makhoa = k[j % x] - 'a';
        int maso = (roso + makhoa) % 26;
        tmp.push_back(P[maso]);
    }

    return tmp;
}

void hienthi(const string& s) {
    cout << s;
}

string giaima(const string& s, const string& k) {
    string tmp;
    int l = s.length();
    int x = k.length();
    tmp.reserve(l);

    for (int j = 0; j < l; j++) {
        int roso = s[j] - 'a';
        int makhoa = k[j % x] - 'a';
        int maso = (roso + 26 - makhoa) % 26;
        tmp.push_back(P[maso]);
    }

    return tmp;
}

int main() {
    int ch;
    string s1, s2, k, s3;

    cout << "Luu y: Khong de khoang trong khi nhap xau ky tu" << endl;
    cout << "Nhap xau ki tu: ";
    getline(cin, s1);

    cout << "Nhap khoa k: ";
    getline(cin, k);

    int l = s1.length();

    while (true) {
        cout << "\n\nMENU";
        cout << "\n[1].Ma hoa xau.";
        cout << "\n[2].Giai ma xau.";
        cout << "\n[3].Thoat.";
        cout << "\nMoi ban chon: ";
        cin >> ch;

        switch (ch) {
            case 1:
                s2 = mahoa(s1, k);
                cout << "Xau duoc ma hoa:\n";
                hienthi(s2);
                break;

            case 2:
                s3 = giaima(s2, k);
                cout << "Xau duoc giai ma:\n";
                hienthi(s3);
                break;

            case 3:
                return 0;
        }
    }
}
