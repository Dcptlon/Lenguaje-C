#include <iostream>
#include <vector>
/*--------------------------------ELIAS ARZAMENDIA-----------------------------------*/
using namespace std;
int main() {
    vector<int> numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Vector sin invertir: " << endl;
    for(int i = 0; i < numeros.size(); i++){
        cout << numeros[i] << " ";
    }
    cout << endl;

    cout << "\n" << "Vector en orden inverso:" << endl;
    for (int i = numeros.size() - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
