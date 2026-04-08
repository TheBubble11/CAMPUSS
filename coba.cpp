#include <iostream>
#include <iomanip>
using namespace std;

void tampilkanMenu() {
    cout << "=== KALKULATOR BANGUN RUANG ===" << endl;
    cout << "1. Kubus\n2. Balok\n3. Tabung" << endl;
}

double volumeKubus(double sisi){
    return sisi * sisi * sisi;
}

double luasPermukaanKubus(double sisi) {
    return 6 * sisi * sisi;
}

double volumeBalok(double p, double l, double t) {
    return p * l * t;
}

double luasPermukaanBalok(double p, double l, double t) {
    return 2 * (p * l + p * t + l * t);
}   

double volumeTabung(double r, double t) {
    return 3.14 * r * r * t;
}

double luasPermukaanTabung(double r, double t) {
    return 2 * 3.14 * r * (r + t);
}

void tampilkanHasil(string namaRuang, double volume, double luas) {
    cout << fixed << setprecision(2);
    cout << "Bangun Ruang: " << namaRuang << endl;
    cout << "Volume: " << volume << " satuan³" << endl;
    cout << "Luas Permukaan: " << luas << " satuan²" << endl;
}

int main() {
    int pilihan;

        tampilkanMenu();
        cout << "Pilih: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1: {
                double sisi;
                cout << "--- KUBUS ---" << endl;
                cout << "Masukkan panjang: ";
                cin >> sisi;
                cout << "==== HASIL ====" << endl;
                double volume = volumeKubus(sisi);
                double luas = luasPermukaanKubus(sisi);
                tampilkanHasil("Kubus", volume, luas);
                cout << "================" << endl;
                break;
            }
            case 2: {
                double p, l, t;
                cout << "--- BAL ---" << endl;
                cout << "Masukkan panjang: ";
                cin >> p;
                cout << "Masukkan lebar: ";
                cin >> l;
                cout << "Masukkan tinggi: ";
                cin >> t;
                cout << "==== HASIL ====" << endl;
                double volume = volumeBalok(p, l, t);
                double luas = luasPermukaanBalok(p, l, t);
                tampilkanHasil("Balok", volume, luas);
                cout << "================" << endl;
                break;
            }
            case 3: {
                double r, t;
                cout << "--- TABUNG ---" << endl;
                cout << "Masukkan jari-jari: ";
                cin >> r;
                cout << "Masukkan tinggi: ";
                cin >> t;
                cout << "==== HASIL ====" << endl;
                double volume = volumeTabung(r, t);
                double luas = luasPermukaanTabung(r, t);
                tampilkanHasil("Tabung", volume, luas);
                cout << "================" << endl;
                break;
            }
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    
        return 0;
}
