#include <iostream>
#include <cstdlib>
#include <ctime>
/*--------------------------------ELIAS ARZAMENDIA-----------------------------------*/
using namespace std;
int main() {
    int numeroUsuario, numeroAleatorio, intentos = 0;
    srand(static_cast<unsigned int>(time(0)));
    numeroAleatorio = rand() % 100 + 1;

    cout << "Ingrese un numero entre 1 y 100" << endl;

    do {
        cout << "Ingresa un numero: ";
        cin >> numeroUsuario;
        intentos++;

        if (numeroUsuario > numeroAleatorio) {
            cout << "El numero que ingresaste es mayor :(" << endl;
        } else if (numeroUsuario < numeroAleatorio) {
            cout << "El numero que ingresaste es menor :1" << endl;
        } else {
            cout << "Lo conseguiste adivinar en: " << intentos << " intentos :]" << endl;
        }
    } while (numeroUsuario != numeroAleatorio);

    return 0;
}
