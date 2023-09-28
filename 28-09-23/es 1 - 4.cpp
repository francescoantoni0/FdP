#include <iostream>

using namespace std;

int main() {
    cout << "Inserisci il dividendo" << endl;
    int d;
    cin >> d;

    cout << "Inserisci il divisore (deve essere diverso da 0)" << endl;
    int q;
    cin >> q;

    cout << "La parte intera del quoziente è: " << d / q << endl;
    cout << "Il resto della divisione intera è: " << d % q << endl;
    
    return 0;
}