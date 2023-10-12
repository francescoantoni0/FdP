#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Inserisci x e y" << endl;
    cin >> x >> y;
    while (true) {
        if (x > y) x -= y;
        else if (x < y) y -= x;
        else {
            cout << x;
            return 0;
        }
    }
}