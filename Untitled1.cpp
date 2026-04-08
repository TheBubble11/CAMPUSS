#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	int n, hasil;
		
	cout << "masukkan nilai: ";
	cin >> n;
		
	if ( n < 0) 
		cout << "Input tidak valid!";
    else 
	    return 0;
	    
    cout << endl;
		
	hasil = n * n;
		
	cout << "hasilnya adalah: " << hasil << endl;
}
