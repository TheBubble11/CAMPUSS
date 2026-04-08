#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int menu, shift;
    string pesan, hasil;

    cout << "=== CAESAR CIPHER ===" << endl;
    cout << "MENU:" << endl;
    cout << "1. Enkripsi" << endl;
    cout << "2. Dekripsi" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> menu;
    cin.ignore(); 

    switch (menu) {
        case 1:
            hasil = "";
            cout << "\nMasukkan pesan: ";
            getline(cin, pesan);
            cout << "Masukkan shift: ";
            cin >> shift;

            shift %= 26;

            for (char c : pesan) {
                if (isalpha(c)) {
                    c = toupper(c);
                    hasil += char((c - 'A' + shift) % 26 + 'A');
                } else {
                    hasil += c;
                }
            }

            cout << "\nPesan asli     : " << pesan << endl;
            cout << "Hasil enkripsi : " << hasil << endl;
            break;

        case 2:
            hasil = "";
            cout << "\nMasukkan pesan terenkripsi: ";
            getline(cin, pesan);
            cout << "Masukkan shift: ";
            cin >> shift;

            shift %= 26;

            for (char c : pesan) {
                if (isalpha(c)) {
                    c = toupper(c);
                    hasil += char((c - 'A' - shift + 26) % 26 + 'A');
                } else {
                    hasil += c;
                }
            }

            cout << "\nPesan terenkripsi : " << pesan << endl;
            cout << "Hasil dekripsi   : " << hasil << endl;
            break;

        case 3:
            cout << "Program selesai." << endl;
            break;

        default:
            cout << "Menu tidak valid!" << endl;
    }

    return 0;
}
