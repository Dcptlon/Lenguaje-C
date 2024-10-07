#include <iostream>
#include <vector>
/*--------------------------------ELIAS ARZAMENDIA-----------------------------------*/
using namespace std;
int sumaDeElementos(const vector<int>& numeros) {
    int suma = 0;
    for (int i = 0; i < numeros.size(); i++) {
        suma += numeros[i];
    }
    return suma;
}

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Vector a sumar:";
    for(int i = 0; i < numeros.size(); i++){
        cout << " " <<  numeros[i];
    }
    cout << endl;
    cout << "La suma de los elementos del vector es: " << sumaDeElementos(numeros) << endl;

    return 0;
}
