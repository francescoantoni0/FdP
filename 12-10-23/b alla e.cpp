#include <iostream>

using namespace std;

int main() {
    int base, esponente, ris = 1;
    cout << "Inserisci base ed esponente" << endl;
    cin >> base >> esponente;
    if (esponente < 0) {
        if (!base) {
            return -1;
        }
        esponente = 0;
    }
    switch (esponente) {
        case 0:
            cout << 1;
            break;
        case 1:
            cout << base;
            break;
        default:
            for (int i = 0; i < esponente; i++)
                ris *= base;
            cout << ris;
            break;
    }

}