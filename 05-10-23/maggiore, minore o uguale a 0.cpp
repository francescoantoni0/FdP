#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Inserisci un numero e io ti dirò se è maggiore, minore o uguale a 0: ";
    cin >> a;
    if (a > 0) cout << 'P';
    else if (a == 0) cout << 'Z';
    else cout << 'N';
    return 0;
}
