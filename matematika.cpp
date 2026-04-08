#include <iostream>
using namespace std;

double penjumlahan(double a, double b) {
    return a + b;
}

double pengurangan(double a, double b) {
    return a - b;
}

double perkalian(double a, double b) {
    return a * b;
}

double pembagian(double a, double b) {
    if (b == 0) {
        cout << "Error: Pembagian dengan nol!" << endl;
        return 0;
    }
    return a / b;
}

double perpangkatan(double a, int n) {
    double hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil = hasil * a;
    }
    return hasil;
}

double akarKuadrat(double n) {
    if (n < 0) {
        cout << "Error: Tidak bisa menghitung akar dari bilangan negatif!" << endl;
        return -1;
    }
    if (n == 0 || n == 1) {
        return n;
    }
    
    double tebakan = n / 2;
    for (int i = 1; i <= 10; i++) {
        tebakan = (tebakan + n / tebakan) / 2;
    }
    return tebakan;
}

void tampilkanMenu() {
    cout << "\n=========================================" << endl;
    cout << "      KALKULATOR MATEMATIKA MODULAR      " << endl;
    cout << "=========================================" << endl;
    cout << "1. Penjumlahan (a + b)" << endl;
    cout << "2. Pengurangan (a - b)" << endl;
    cout << "3. Perkalian (a * b)" << endl;
    cout << "4. Pembagian (a / b)" << endl;
    cout << "5. Perpangkatan (a^n)" << endl;
    cout << "6. Akar Kuadrat (va)" << endl;
    cout << "0. Keluar" << endl;
    cout << "=========================================" << endl;
}

void jalankanKalkulator() {
    int pilihan;
    double a, b, hasil;
    int eksponen;
    char ulang;
    
    do {
        tampilkanMenu();
        cout << "\nPilih operasi: ";
        cin >> pilihan;
        
        switch(pilihan) {
            case 1:
                cout << "\n--- Penjumlahan ---" << endl;
                cout << "Masukkan bilangan pertama: ";
                cin >> a;
                cout << "Masukkan bilangan kedua: ";
                cin >> b;
                hasil = penjumlahan(a, b);
                break;
                
            case 2:
                cout << "\n--- Pengurangan ---" << endl;
                cout << "Masukkan bilangan pertama: ";
                cin >> a;
                cout << "Masukkan bilangan kedua: ";
                cin >> b;
                hasil = pengurangan(a, b);
                break;
                
            case 3:
                cout << "\n--- Perkalian ---" << endl;
                cout << "Masukkan bilangan pertama: ";
                cin >> a;
                cout << "Masukkan bilangan kedua: ";
                cin >> b;
                hasil = perkalian(a, b);
                break;
                
            case 4:
                cout << "\n--- Pembagian ---" << endl;
                cout << "Masukkan bilangan pertama: ";
                cin >> a;
                cout << "Masukkan bilangan kedua: ";
                cin >> b;
                hasil = pembagian(a, b);
                break;
                
            case 5:
                cout << "\n--- Perpangkatan ---" << endl;
                cout << "Masukkan bilangan: ";
                cin >> a;
                cout << "Masukkan eksponen: ";
                cin >> eksponen;
                hasil = perpangkatan(a, eksponen);
                break;
                
            case 6:
                cout << "\n--- Akar Kuadrat ---" << endl;
                cout << "Masukkan bilangan: ";
                cin >> a;
                hasil = akarKuadrat(a);
                break;
                
            case 0:
                cout << "\nTerima kasih telah menggunakan kalkulator!" << endl;
                return;
                
            default:
                cout << "\nPilihan tidak valid! Silakan coba lagi." << endl;
        }

        if (pilihan >= 1 && pilihan <= 6) {
            cout << "\n========== HASIL ==========" << endl;
            if (pilihan == 1) {
                cout << a << " + " << b << " = " << hasil << endl;
            } else if (pilihan == 2) {
                cout << a << " - " << b << " = " << hasil << endl;
            } else if (pilihan == 3) {
                cout << a << " * " << b << " = " << hasil << endl;
            } else if (pilihan == 4) {
                cout << a << " / " << b << " = " << hasil << endl;
            } else if (pilihan == 5) {
                cout << a << " ^ " << eksponen << " = " << hasil << endl;
            } else if (pilihan == 6) {
                cout << "v" << a << " = " << hasil << endl;
            }
            cout << "===========================" << endl;
        }
        
        if (pilihan != 0) {
            cout << "\nHitung lagi? (y/n): ";
            cin >> ulang;
        }
        
    } while (ulang == 'y' || ulang == 'Y');
    cout << "\nTerima kasih telah menggunakan kalkulator!" << endl;
    
}




