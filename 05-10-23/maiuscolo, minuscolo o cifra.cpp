#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Inserisci un carattere e io ti dirò se è maiuscolo o minuscolo o se è una cifra: ";
    cin >> c;
    if (c >= 'a' && c <= 'z') {
        cout << "lettera maiuscola" << endl;
    } else if (c >= 'A' && c <= 'Z') {
        cout << "lettera minuscola" << endl;
    } else if (c >= '0' && c <= '9'){
        cout << "cifra decimale" << endl;
    } else {
        cerr << "Not a letter!" << endl;
    }
    return 0;
}