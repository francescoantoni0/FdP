#include <iostream>

using namespace std;

void triplica(int *i) {
    *i *= 3;
}

int main() {
    int i;
    cout << "Numero: ";
    cin >> i;
    triplica(&i);
    cout << i;
}