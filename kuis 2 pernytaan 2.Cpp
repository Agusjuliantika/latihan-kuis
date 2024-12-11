#include <iostream>
using namespace std;

int nilaiTerbesar(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 15;
    cout << "Nilai terbesar antara " << x << " dan " << y << " adalah: " << nilaiTerbesar(x, y) << endl;
    return 0;
}
