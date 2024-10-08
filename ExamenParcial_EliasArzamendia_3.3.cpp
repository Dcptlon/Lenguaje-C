#include <iostream>
#include <vector>
/*--------------------------------ELIAS ARZAMENDIA-----------------------------------*/
using namespace std;
int main() {
    vector<vector<int> > matriz = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Matriz 3x3:" << endl;
    for(int i = 0; i < matriz.size(); i++){
            for(int j = 0; j < matriz[i].size(); j++){
                cout << matriz[i][j] << " ";
            }
        cout << endl;
    }
    cout << endl;

    cout << "Diagonal principal de la matriz 3x3:" << endl;
    for (int i = 0; i < matriz.size(); i++) {
        cout << matriz[i][i] << " ";
    }
    cout << endl;

    return 0;
}