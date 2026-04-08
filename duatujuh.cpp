#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "=== PROGRAM MATRIKS IDENTITAS ===" << endl;

    cout << "\nPART 1: Membuat Matriks Identitas" << endl;
    cout << "Masukkan ukuran: ";
    cin >> N;

    int identitas[10][10];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j)
                identitas[i][j] = 1;
            else
                identitas[i][j] = 0;
        }
    }

    cout << "\nMatriks Identitas " << N << "x" << N << ":" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << identitas[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nPART 2: Pengecekan Matriks Identitas" << endl;
    cout << "Masukkan ukuran matriks: ";
    cin >> N;

    int matriks[10][10];
    cout << "Masukkan elemen matriks:" << endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matriks[i][j];
        }
    }

    cout << "\nMatriks yang diinput:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    bool isIdentitas = true;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j && matriks[i][j] != 1)
                isIdentitas = false;
            else if (i != j && matriks[i][j] != 0)
                isIdentitas = false;
        }
    }

    if (isIdentitas)
        cout << "\nHasil: Matriks adalah Identitas" << endl;
    else
        cout << "\nHasil: Matriks bukan Identitas" << endl;

    return 0;
}
