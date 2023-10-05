#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Inserisci un numero e ti dirò solo se è multiplo di 2 ma non di 4: ";
    cin >> a;
    if (a % 2 == 0 && a % 4 != 0)
        cout << "Yes!" << endl;
    return 0;
}
