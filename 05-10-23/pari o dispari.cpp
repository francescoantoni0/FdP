#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Inserisci un numero e io ti dirò se è pari o dispari:\t";
    cin >> a;
    a % 2 == 0 ? cout << "Pari!" << endl : cout << "Dispari!" << endl;
    return 0;
}
