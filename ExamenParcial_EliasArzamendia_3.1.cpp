#include <iostream>
#include <vector>
/*--------------------------------ELIAS ARZAMENDIA-----------------------------------*/
using namespace std;
int main() {
    vector<int> numeros;
    int n, numero;

    cout << "ingrese el tamano del vector de numeros: ";
    cin >> n;

    cout << "Ingrese los numeros del vector: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> numero;
        numeros.push_back(numero);
    }

    cout << "\n" <<"Numeros ingresados con sus indices asociados:" << endl;
    for (int i = 0; i < numeros.size(); i++) {
        cout << "Indice [" << i << "]: " << numeros[i] << endl;
    }

    return 0;
}
