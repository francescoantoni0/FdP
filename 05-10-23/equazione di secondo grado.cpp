#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cout << "Inserisci i tre coefficienti di una equazione di secondo grado e te la risolverò" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a == 0 && b == 0)
        cerr << "L'equazione è degenere!" << endl;
    if (a == 0) {
        cout << "x = " << -c / b << endl;
        return 1;
    }
    int delta = b ^ 2 - 4 * a * c;
    if (delta < 0) {
        cout << "Soluzioni immaginarie!" << endl;
        return 2;
    } else {
        cout << "x1 = " << (-b + sqrt(delta)) / 2 * a << endl;
        cout << "x2 = " << (-b - sqrt(delta)) / 2 * a << endl;
    }
    return 0;
}
