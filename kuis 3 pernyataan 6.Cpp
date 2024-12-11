#include <iostream>
#include <cmath>
using namespace std;

double hitungLuas(double jariJari) {
    return M_PI * jariJari * jariJari; // M_PI adalah konstanta pi dari <cmath>
}

int main() {
    double jariJari;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;

    double luas = hitungLuas(jariJari);
    cout << "Luas lingkaran dengan jari-jari " << jariJari << " adalah: " << luas << endl;

    return 0;
}
