#include <iostream>

using namespace std;

void calcola_statistiche(int a, int b, int c, int &max, int &min, int &med) {
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

// Calcolo del minimo
    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

// Calcolo della media
    med = (a + b + c) / 3;
}

int main() {
    int v[3], max, min, med;
    cout << "Inserisci tre interi:" << endl;
    for (int &i: v) {
        cin >> i;
    }
    calcola_statistiche(v[0], v[1], v[2], max, min, med);
    cout << "Max: " << max << ", min: " << min << ", med: " << med << endl;
}