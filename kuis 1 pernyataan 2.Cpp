#include <iostream>
using namespace std;

string ganjilGenap(int a) {
    return (a % 2 == 0) ? "Genap" : "Ganjil";
}

int main() {
    int angka;
    cout << "Masukkan sebuah angka: ";
    cin >> angka;
    cout << "Angka " << angka << " adalah: " << ganjilGenap(angka) << endl;
    return 0;
}
