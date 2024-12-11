#include <iostream>
using namespace std;

int kali(int a, int b) {
    return a * b;
}

int main() {
    int x = 5, y = 6;
    cout << "Hasil perkalian " << x << " dan " << y << " adalah: " << kali(x, y) << endl;
    return 0;
}
