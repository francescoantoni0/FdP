#include <iostream>

using namespace std;

int main() {
    int i;
    do {
        cout << "Inserisci un numero intero positivo: ";
        cin >> i;
        if (i < 0) {
            cerr << "Errore! Il numero non è positivo!" << endl;
            continue;
        }
        break;
    } while (true);
}