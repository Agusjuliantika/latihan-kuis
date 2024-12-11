#include <iostream>
using namespace std;

double rataRata(int arr[], int ukuran) {
    double total = 0;
    for (int i = 0; i < ukuran; i++) {
        total += arr[i];
    }
    return total / ukuran;
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen-elemen array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double hasilRataRata = rataRata(arr, n);
    cout << "Rata-rata elemen array adalah: " << hasilRataRata << endl;

    return 0;
}
