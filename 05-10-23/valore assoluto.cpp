#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Inserisci un numero: ";
    cin >> a;
    if (a < 0) cout << -a;
    else cout << a;
	return 0;
}
