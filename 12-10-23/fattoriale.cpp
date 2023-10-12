#include <iostream>

using namespace std;

int main() {
    int i, fatt = 1;
    cout << "Inserisci il valore di cui calcolare il fattoriale" << endl;
    cin >> i;
    for (int j = 1; j <= i; j++) {
        fatt *= j;
    }
    cout << "Fattoriale di " << i << ": " << fatt << endl;
}