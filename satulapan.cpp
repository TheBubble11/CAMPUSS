#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool validUsername(string username) {
    int len = username.length();
    if (len < 5 || len > 15)
        return false;

    for (int i = 0; i < len; i++) {
        if (!isalnum(username[i]))
            return false;
    }
    return true;
}

bool validEmail(string email) {
    if (email.find('@') == string::npos || email.find('.') == string::npos)
        return false;
    return true;
}

bool validTelepon(string telp) {
    int len = telp.length();
    if (len < 10 || len > 13)
        return false;

    for (int i = 0; i < len; i++) {
        if (!isdigit(telp[i]))
            return false;
    }
    return true;
}

int main() {
    string username, email, telepon;
    bool semuaValid = true;

    cout << "=== VALIDATOR STRING INPUT ===\n\n";

    cout << "Masukkan username: ";
    getline(cin, username);

    if (validUsername(username))
        cout << "Username: VALID\n\n";
    else {
        cout << "Username: TIDAK VALID\n\n";
        semuaValid = false;
    }

    cout << "Masukkan email: ";
    getline(cin, email);

    if (validEmail(email))
        cout << "Email: VALID\n\n";
    else {
        cout << "Email: TIDAK VALID\n\n";
        semuaValid = false;
    }

    cout << "Masukkan no. telepon: ";
    getline(cin, telepon);

    if (validTelepon(telepon))
        cout << "No. Telepon: VALID\n\n";
    else {
        cout << "No. Telepon: TIDAK VALID\n\n";
        semuaValid = false;
    }

    cout << "=== HASIL VALIDASI ===\n";
    if (semuaValid)
        cout << "Semua input VALID!\n";
    else
        cout << "Terdapat input yang TIDAK VALID.\n";

    return 0;
}
