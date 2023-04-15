#include <iostream>
using namespace std;

int main() {
    float numero1;
    float numero2;
    char operacion;

    cout << "digite el numero 1 " << endl;
    cin >> numero1;
    cout << "digite el numero 2 " << endl;
    cin >> numero2;
    cout << "digite la operacion " << endl;
    cin >> operacion;

    switch (operacion) {

        case '+': {
            float resultado =  numero1 + numero2;
            cout << "el resultado es " << resultado << endl;
            break;
        }
        case '-': {
            float resultado =  numero1 - numero2;
            cout << "el resultado es " << resultado << endl;
            break;
        }
    }
}

