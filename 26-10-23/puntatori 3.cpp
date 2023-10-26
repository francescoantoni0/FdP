#include <iostream>
#include <cmath>

using namespace std;

void inizializzaP(int *&p) {
    p = nullptr;
}

int main() {
    int *i, k = 4;
    cout << "p non inizializzato: " << i << endl;
    i = &k;
    cout << "p punta a k: " << i << endl;
    cout << "valore di k: " << *i << endl;
    inizializzaP(i);
    cout << "p inizializzato a null: " << i;
}