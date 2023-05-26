#include <iostream>
#include <string>

using namespace std;

string taoKhoa(string banRo, string key) {
    while (key.size() < banRo.size()) {
        key += key;
    }
    key.resize(banRo.size());
    return key;
}

string maHoa(string banRo, string key) {
    string banMa = "";
    for (int i = 0; i < banRo.length(); i++) {
        if (isupper(banRo[i])) {
            banMa += (banRo[i] + key[i] - 'A' - 'A') % 26 + 'A';
        } else {
            banMa += (banRo[i] + key[i] - 'a' - 'a') % 26 + 'a';
        }
    }
    return banMa;
}

string giaiMa(string banMa, string key) {
    string banRo = "";
    for (int i = 0; i < banMa.length(); i++) {
        if (isupper(banMa[i])) {
            banRo += (banMa[i] - key[i] + 26) % 26 + 'A';
        } else {
            banRo += (banMa[i] - key[i] + 26) % 26 + 'a';
        }
    }
    return banRo;
}

main() {
    string banRo, key;

    cout << "Nhap chuoi can ma hoa: ";
    getline(cin, banRo);

    cout << "Nhap khoa: ";
    getline(cin, key);

    string khoa = taoKhoa(banRo, key);

    string banMa = maHoa(banRo, khoa);
    cout << "Ban ma la: " << banMa << endl;

    string banMaMaHoa = giaiMa(banMa, khoa);
    cout << "Ban ro la: " << banMaMaHoa << endl;

    return 0;
}

