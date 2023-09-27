#include <iostream>

using namespace std;

int main() {
    unsigned int n = 23; //creo una variabile di tipo intero positivo e la inizializzo a 23
    unsigned int q0 = n; //creo un'altra variabile e le faccio prendere il valore di n

    int a = -3; //creo una variabile di tipo intero e la inizializzo a -3

    cout << a << endl; //stampo la variabile a

    cout << "q1 = " << q0 / 2 << endl; //Stampo il risultato della divisione, ci sono altri << tra "q1="
                                       //e q0/2 perché in questo modo è possibile concatenare una stringa
                                       // e un numero. Se provate a fare "q1 = " + q0/2 vedete che vi dà errore

    unsigned int q1 = q0 / 2; // divisione intera
    unsigned int a0 = q0 % 2; //modulo (l'operatore per il modulo è %)

    cout << "q1 = " << q1 << "; a0 = " << a0 << endl; //stampo
}
