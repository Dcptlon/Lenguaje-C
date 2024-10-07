#include <iostream>
/*--------------------------------ELIAS ARZAMENDIA-----------------------------------*/
using namespace std;
int main(){
    double a, b, c, d, expresionA, expresionB;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "ingrese el valor de c: ";
    cin >> c;
    cout << "ingrese el valor de d: ";
    cin >> d;

    expresionA = a + (b / (c - d));
    expresionB = (a + b) / ( c + d);

    cout << "\n" << "El valor de la expresion A (a + (b / (c - d))) es: " << expresionA << endl;
    cout << "\n" << "El valor de la expresion B ((a + b) / ( c + d)) es: " << expresionB << endl;

    return 0;
}
