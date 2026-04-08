#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

const int MAX = 100; // Maksimal data
const int MIN_REQUIRED = 15; // Minimal data yang harus diinput

string nim[MAX];
int nilai[MAX];
int jumlahData = 0;
bool dataAda = false;

void inputData() {
    cout << "\n=== INPUT DATA MAHASISWA ===\n";
    
    // INPUT JUMLAH MAHASISWA
    cout << "Masukkan jumlah mahasiswa (minimal " << MIN_REQUIRED << "): ";
    cin >> jumlahData;
    
    // Validasi jumlah data
    while (jumlahData < MIN_REQUIRED) {
        cout << "Jumlah tidak valid! Masukkan minimal " << MIN_REQUIRED << ": ";
        cin >> jumlahData;
    }
    
    // Input data untuk setiap mahasiswa
    for (int i = 0; i < jumlahData; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM   : ";
        cin >> nim[i];
        cout << "Nilai : ";
        cin >> nilai[i];
        cout << endl;
    }

    dataAda = true;
    cout << "\nData berhasil diinput!\n";
}

void bubbleSort() {
    if (!dataAda) {
        cout << "\nBelum ada data! Silakan input data terlebih dahulu.\n";
        return;
    }
    
    for (int i = 0; i < jumlahData - 1; i++) {
        for (int j = 0; j < jumlahData - i - 1; j++) {
            if (nilai[j] < nilai[j + 1]) {
                int tempNilai = nilai[j];
                nilai[j] = nilai[j + 1];
                nilai[j + 1] = tempNilai;

                string tempNim = nim[j];
                nim[j] = nim[j + 1];
                nim[j + 1] = tempNim;
            }
        }
    }

    cout << "Data berhasil diurutkan (nilai tertinggi ke terendah).\n";
}

void linearSearch() {
    if (!dataAda) {
        cout << "\nBelum ada data! Silakan input data terlebih dahulu.\n";
        return;
    }
    
    string nimCari;
    cout << "Masukkan NIM yang dicari: ";
    cin >> nimCari;

    bool ditemukan = false;
    for (int i = 0; i < jumlahData; i++) {
        if (nim[i] == nimCari) {
            cout << "Mahasiswa ditemukan!\n";
            cout << "NIM   : " << nim[i] << endl;
            cout << "Nilai : " << nilai[i] << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Mahasiswa dengan NIM " << nimCari << " tidak ditemukan.\n";
    }
}

void tampilkanStatistik() {
    if (!dataAda) {
        cout << "\nBelum ada data! Silakan input data terlebih dahulu.\n";
        return;
    }
    
    int tertinggi = nilai[0];
    int terendah = nilai[0];
    int total = 0;
    int lulus = 0;
    int tidakLulus = 0;

    for (int i = 0; i < jumlahData; i++) {
        if (nilai[i] > tertinggi)
            tertinggi = nilai[i];

        if (nilai[i] < terendah)
            terendah = nilai[i];

        total += nilai[i];

        if (nilai[i] >= 60)
            lulus++;
        else
            tidakLulus++;
    }

    double rata = (double) total / jumlahData;

    cout << "\n=== STATISTIK NILAI MAHASISWA ===\n";
    cout << "Nilai Tertinggi : " << tertinggi << endl;
    cout << "Nilai Terendah  : " << terendah << endl;
    cout << "Rata-rata       : " << fixed << setprecision(2) << rata << endl;
    cout << "Jumlah Lulus    : " << lulus << endl;
    cout << "Tidak Lulus     : " << tidakLulus << endl;
}

void tampilkanSemuaData() {
    if (!dataAda) {
        cout << "\nBelum ada data! Silakan input data terlebih dahulu.\n";
        return;
    }
    
    cout << "\nNo  NIM     Nilai\n";
    cout << "-------------------\n";
    for (int i = 0; i < jumlahData; i++) {
        cout << setw(2) << i + 1 << "  "
             << nim[i] << "   "
             << nilai[i] << endl;
    }
}

int main() {
    int pilih;

    cout << "========================================\n";
    cout << "=== SISTEM MANAJEMEN NILAI MAHASISWA ===\n";
    cout << "========================================\n";
    cout << "============ THE TEAM 7 ================\n";
    cout << "1. Muhammad Mulya Hasaruddin\n";
    cout << "2. Muhammad Alif\n";
    cout << "3. Abd. Hasan\n";

    do {
        cout << "\n=== MENU UTAMA ===\n";
        cout << "1. Input Data\n";
        cout << "2. Urutkan Data (Bubble Sort)\n";
        cout << "3. Cari Mahasiswa (Linear Search)\n";
        cout << "4. Tampilkan Statistik\n";
        cout << "5. Tampilkan Semua Data\n";
        cout << "6. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                inputData();
                break;
            case 2:
                bubbleSort();
                break;
            case 3:
                linearSearch();
                break;
            case 4:
                tampilkanStatistik();
                break;
            case 5:
                tampilkanSemuaData();
                break;
            case 6:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }

    } while (pilih != 6);

    return 0;
}