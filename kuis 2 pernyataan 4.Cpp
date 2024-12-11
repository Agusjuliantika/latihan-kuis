#include <iostream>
using namespace std;

void tukarAngka(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Sebelum ditukar: x = " << x << ", y = " << y << endl;

    tukarAngka(&x, &y);

    cout << "Setelah ditukar: x = " << x << ", y = " << y << endl;
    return 0;
}
