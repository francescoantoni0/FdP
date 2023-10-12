#include <iostream>

using namespace std;

int main() {
    int n, somma = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Intero no. " << i << endl;
        cin >> n;
        somma += n;
    }
    cout << "Somma = " << somma;
}