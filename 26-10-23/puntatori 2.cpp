#include <iostream>
#include <cmath>

using namespace std;

int f(int *i) {
    cout << "Dentro f(): Valore puntatore: " << i << endl;
    cout << "Valore oggetto puntato: " << *i << endl;
    if (*i % 2 == 0) {
        return (int) pow(*i, 2);
    } else if (*i % 3 == 0) return (int) pow(*i, 3);
    else return *i;
}

int main() {
    int n;
    cout << "Numero: ";
    cin >> n;
    cout << "Indirizzo in memoria: " << &n << endl;
    cout << f(&n);
}