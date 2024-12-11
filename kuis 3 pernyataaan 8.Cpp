#include <iostream>
using namespace std;

int faktorial(int n) {
    if (n <= 1) // Basis rekursi
        return 1;
    return n * faktorial(n - 1); // Rekursi
}

int main() {
    int angka;
    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    int hasilFaktorial = faktorial(angka);
    cout << "Faktorial dari " << angka << " adalah: " << hasilFaktorial << endl;

    return 0;
}
