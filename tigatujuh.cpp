#include <iostream>
#include <cctype>   
using namespace std;

int main() {
    char str[100];
    int panjang = 0;
    int vokal = 0, konsonan = 0;

    cout << "=== MANIPULASI STRING ===" << endl;
    cout << "Masukkan sebuah kalimat: ";
    cin.getline(str, 100);

    while (str[panjang] != '\0') {
        panjang++;
    }

    for (int i = 0; i < panjang; i++) {
        char ch = tolower(str[i]);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vokal++;
            } else {
                konsonan++;
            }
        }
    }

    cout << endl;
    cout << "String yang diinput: " << str << endl;
    cout << "Panjang string: " << panjang << " karakter" << endl;

    cout << endl;
    cout << "String terbalik: ";
    for (int i = panjang - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;

    cout << endl;
    cout << "Jumlah huruf vokal: " << vokal << endl;
    cout << "Jumlah huruf konsonan: " << konsonan << endl;

    return 0;
}
