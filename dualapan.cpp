#include <iostream>
#include <string>
#include <cctype>  

using namespace std;

int main() {
    string teks;

    int jumlahKarakterDenganSpasi = 0;
    int jumlahKarakterTanpaSpasi = 0;
    int jumlahKata = 0;
    int jumlahVokal = 0;
    int jumlahKonsonan = 0;
    int jumlahAngka = 0;
    int jumlahSpasi = 0;

    cout << "=== TEXT ANALYZER ===" << endl;
    cout << "Masukkan teks: ";
    getline(cin, teks);

    bool dalamKata = false;

    for (int i = 0; i < teks.length(); i++) {
        char c = teks[i];
        jumlahKarakterDenganSpasi++;

        if (c == ' ') {
            jumlahSpasi++;
            dalamKata = false;
        } else {
            jumlahKarakterTanpaSpasi++;

            if (!dalamKata) {
                jumlahKata++;
                dalamKata = true;
            }

            if (isdigit(c)) {
                jumlahAngka++;
            }
            else if (isalpha(c)) {
                char huruf = tolower(c);
                if (huruf == 'a' || huruf == 'e' || huruf == 'i' || huruf == 'o' || huruf == 'u') {
                    jumlahVokal++;
                } else {
                    jumlahKonsonan++;
                }
            }
        }
    }

    cout << "\n=== STATISTIK TEKS ===" << endl;
    cout << "Teks: " << teks << endl;
    cout << "Jumlah karakter (dengan spasi): " << jumlahKarakterDenganSpasi << endl;
    cout << "Jumlah karakter (tanpa spasi): " << jumlahKarakterTanpaSpasi << endl;
    cout << "Jumlah kata: " << jumlahKata << endl;
    cout << "Jumlah huruf vokal: " << jumlahVokal << endl;
    cout << "Jumlah huruf konsonan: " << jumlahKonsonan << endl;
    cout << "Jumlah angka: " << jumlahAngka << endl;
    cout << "Jumlah spasi: " << jumlahSpasi << endl;

    return 0;
}
