#include <iostream>

using namespace std;

int main() {
    int n, somma = 0, i;
    for (i = 0; i < 10; i++) {
        cout << "Intero no. " << i << endl;
        cin >> n;
        if (n >= 0) {
            somma += n;
        }
    }
    cout << "Media = " << somma / i + 1;
}