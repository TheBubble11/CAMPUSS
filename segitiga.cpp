#include <iostream>
#include <cmath>
using namespace std;

class Segitiga {
private:
    double sisi_a, sisi_b, sisi_c;
public:
    Segitiga(double a, double b, double c) : sisi_a(a), sisi
_b(b), sisi_c(c) {}
    double keliling() {
        return sisi_a + sisi_b + sisi_c;
    }
    double luas() {
        double s = keliling() / 2;
        return sqrt(s * (s - sisi_a) * (s - sisi_b) * (s - sisi_c));
    }
};
int main() {
    double a, b, c;
    cout << "Masukkan panjang sisi a: ";
    cin >> a;
    cout << "Masukkan panjang sisi b: ";
    cin >> b;
    cout << "Masukkan panjang sisi c: ";
    cin >> c;

    Segitiga segitiga(a, b, c);
    cout << "Keliling segitiga: " << segitiga.keliling() << endl;
    cout << "Luas segitiga: " << segitiga.luas() << endl;

    return 0;
}