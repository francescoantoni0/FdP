#include <iostream>
using namespace std;

int main() {
    char c;
    cout << "Inserisci un carattere e io ti dirò se è maiuscolo o minuscolo: ";
    cin >> c;
    if (c >= 'a' && c <= 'z') {
        cout << 'm' << endl;
    } else if (c >= 'A' && c <= 'Z') {
        cout << 'M' << endl;
    } else {
        cerr << "Not a letter!" << endl;
    }
    return 0;
}