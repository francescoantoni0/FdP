#include <iostream>

using namespace std;

int main() {
    int i, j, k;
    cout << "Inserisci tre numeri e io ti dirò il maggiore" << endl;
    cin >> i;
    cin >> j;
    cin >> k;
    if (i > j) {
        if (i > k) cout << i;
        else cout << k;
    } else if (j > k) cout << j;
    else cout << k;
    return 0;
}