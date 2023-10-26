#include <iostream>

using namespace std;

int main() {
    cout << "Dammi la dimensione" << endl;
    int x;
    cin >> x;
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            cout << '*' << "  ";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            if (i == 0 || i == x - 1 || j == 0 || j == x - 1){
                cout << '*' << "  ";
            }
            else {
                cout << "   ";
            }
        }
        cout << endl;
    }
}
