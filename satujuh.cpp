#include <iostream>
using namespace std;

int main() {
    int N;
    int matriks[10][10];

    cout << "Masukkan ukuran matriks persegi: ";
    cin >> N;

    cout << "Masukkan elemen matriks:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriks[i][j];
        }
    }

    cout << "\nMatriks " << N << "x" << N << ":" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriks[i][j] << "\t";
        }
        cout << endl;
    }

    int jumlahUtama = 0;
    int jumlahSekunder = 0;

    cout << "\nDiagonal Utama: ";
    for (int i = 0; i < N; i++) {
        cout << matriks[i][i];
        jumlahUtama += matriks[i][i];
        if (i < N - 1) cout << ", ";
    }
    cout << "\nJumlah Diagonal Utama: " << jumlahUtama << endl;

    cout << "\nDiagonal Sekunder: ";
    for (int i = 0; i < N; i++) {
        cout << matriks[i][N - 1 - i];
        jumlahSekunder += matriks[i][N - 1 - i];
        if (i < N - 1) cout << ", ";
    }
    cout << "\nJumlah Diagonal Sekunder: " << jumlahSekunder << endl;

    return 0;
}
