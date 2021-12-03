#include <iostream>
#include <vector>
using namespace std;

int main() {
    setlocale(LC_ALL, "es_ES.UTF-8");

    // crea un vector para almacenar int
    vector<int> vec;
    int i;

    // mostramos el tamaño original de vec
    cout << "tamaño vector = " << vec.size() << endl;

    // ponemos 5 valores dentro del vector
    for (i = 0; i < 5; i++) {
        vec.push_back(i);
    }

    // mostramos el tamaño extendido del vectordisplay extended size of vec
    cout << "tamaño del vector extendido = " << vec.size() << endl;

    // acceder a 5 valores desde el vector
    for (i = 0; i < 5; i++) {
        cout << "valor del vec [" << i << "] = " << vec[i] << endl;
    }

    // usar iterador para acceder a los valores
    vector<int>::iterator v = vec.begin();
    while (v != vec.end()) {
        cout << "valor de v = " << *v << endl;
        v++;
    }

    return 0;
}
