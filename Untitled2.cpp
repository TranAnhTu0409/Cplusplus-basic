#include <iostream>
#include <string>

using namespace std;

string P = "abcdefghijklmnopqrstuvwxyz";

string mahoa(const string& s, const string& k)
{
    int l = s.length();
    string tmp(l, ' ');
    int* roso = new int[l];
    int x = k.length();
    int* makhoa = new int[x];

    for (int j = 0; j < l; j++) {
        for (int i = 0; i < 26; i++) {
            if (P[i] == s[j]) {
                roso[j] = i;
            }
        }
    }

    for (int t = 0; t < x; t++) {
        for (int i = 0; i < 26; i++) {
            if (P[i] == k[t]) {
                makhoa[t] = i;
            }
        }
    }

    int b = 0;
    for (int a = 0; a < l; a++) {
        if (b == x) b = 0;
        int maso = (roso[a] + makhoa[b]) % 26;
        tmp[a] = P[maso];
        b++;
    }

    delete[] roso;
    delete[] makhoa;

    return tmp;
}

void hienthi(const string& s)
{
    cout << s;
}

string giaima(const string& s, const string& k)
{
    int l = s.length();
    string tmp(l, ' ');
    int* roso = new int[l];
    int x = k.length();
    int* makhoa = new int[x];

    for (int j = 0; j < l; j++) {
        for (int i = 0; i < 26; i++) {
            if (P[i] == s[j]) {
                roso[j] = i;
            }
        }
    }

    for (int t = 0; t < x; t++) {
        for (int i = 0; i < 26; i++) {
            if (P[i] == k[t]) {
                makhoa[t] = i;
            }
        }
    }

    int b = 0;
    for (int a = 0; a < l; a++) {
        if (b == x) b = 0;
        int maso = (roso[a] + 26 - makhoa[b]) % 26;
        tmp[a] = P[maso];
        b++;
    }

    delete[] roso;
    delete[] makhoa;

    return tmp;
}

int main()
{
    int ch;
    string s1, s2, k, s3;
    cout << "Nhap xau ki tu:";
    getline(cin, s1);
    cout << "Nhap khoa k:";
    getline(cin, k);
    int l = s1.length();

    while (true) {
        cout << " \nMENU";
        cout << "\n[1].Ma hoa sau.";
        cout << "\n[2].Giai ma sau.";
        cout << "\n[3].Thoat.";
        cout << "\nMoi ban chon:";
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
            break;
        }

        if (ch == 3)
            break;
    }

    return 0;
}

