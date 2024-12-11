#include <iostream>
using namespace std;

void kaliLima(int* angka) {
    *angka *= 5; // Mengalikan nilai yang ditunjuk pointer dengan 5
}

int main() {
    int angka;
    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    kaliLima(&angka);

    cout << "Nilai setelah dikalikan 5 adalah: " << angka << endl;
    return 0;
}
