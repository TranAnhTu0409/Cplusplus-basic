#include <iostream>
#include <string>

using namespace std;

string maHoa(string banRo, int key) {
    string banMa = "";
    for (int i = 0; i < banRo.length(); i++) {
        if (isupper(banRo[i])) {
            banMa += (banRo[i] - 'A' + key) % 26 + 'A';
        } else {
            banMa += (banRo[i] - 'a' + key) % 26 + 'a';
        }
    }
    return banMa;
}

string giaiMa(string banMa, int key) {
    string banRo = "";
    for (int i = 0; i < banMa.length(); i++) {
        if (isupper(banMa[i])) {
            banRo += (banMa[i] - 'A' - key + 26) % 26 + 'A';
        } else {
            banRo += (banMa[i] - 'a' - key + 26) % 26 + 'a';
        }
    }
    return banRo;
}

main() {
    string banRo;
    int key;
    
    cout << "Nhap chuoi can ma hoa: ";
    getline(cin >> ws, banRo);
    
    cout << "Nhap khoa: ";
    cin >> key;
  
    string banMa = maHoa(banRo, key);
    cout << "Ban ma la: " << banMa << endl;
    
    string banRoGiaiMa = giaiMa(banMa, key);
    cout << "Ban ro la: " << banRoGiaiMa << endl;
    
    return 0;
}

