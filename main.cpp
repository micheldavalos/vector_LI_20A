#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> enteros;
    string op;

    while (true) {
        cout << "1)Agregar al final" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Inicializar" << endl;
        cout << "4) Frente" << endl;
        cout << "5) Último" << endl;
        cout << "6) Insertar" << endl;
        cout << "7) Eliminar" << endl;
        cout << "8) Eliminar último" << endl;
        cout << "9) Ordenar asc" << endl;
        cout << "10) Ordenar des" << endl;
        cout << "11) Buscar" << endl;
        cout << "0) Salir" << endl;
        getline(cin, op);

        if (op == "1") {
            int x;
            cout << "entero: ";
            cin >> x; cin.ignore();
            enteros.push_back(x);
        }
        else if (op == "2") {
            for (size_t i = 0; i < enteros.size(); i++) {
                cout << enteros[i] << endl;
                //cout << enteros.at(i) << endl;
            }
        }
        else if (op == "3") {
            int x;
            size_t n;

            cout << "entero: ";
            cin >> x;
            cout << "n: ";
            cin >> n; cin.ignore();

            enteros = vector<int>(n, x);
        }
        else if (op == "4") {
            if (enteros.empty()) {
                cout << "vector está vacío" << endl;
            }
            else {
                cout << enteros.front() << endl;
            }
        }
        else if (op == "5") {
            if (enteros.empty()) {
                cout << "vector está vacío" << endl;
            }
            else {
                cout << enteros.back() << endl;
            }
        }
        else if (op == "6") {
            int x;
            size_t p;

            cout << "entero: ";
            cin >> x;
            cout << "posición: ";
            cin >> p; cin.ignore();

            if (p >= enteros.size()) {
                cout << "posición no válida" << endl;
            }
            else {
                enteros.insert(enteros.begin()+p, x);
            }

        }
        else if (op == "7") {
            size_t p;

            cout << "posición: ";
            cin >> p; cin.ignore();

            if (p >= enteros.size()) {
                cout << "posición no válida" << endl;
            }
            else {
                enteros.erase(enteros.begin()+p);
            }
        }
        else if (op == "8") {
            if (enteros.empty()) {
                cout << "vector vacío" << endl;
            }
            else {
                enteros.pop_back();
            }
        }
        else if (op == "9") {
            sort(enteros.begin(), enteros.end());
        }
        else if (op == "10") {
            sort(enteros.begin(), enteros.end(), greater<int>());
        }
        else if (op == "11") {
            int x;

            cout << "entero: ";
            cin >> x; cin.ignore();

            //vector<int>::iterator it = find(enteros.begin(), enteros.end(), x);
            auto it = find(enteros.begin(), enteros.end(), x);
            if (it == enteros.end()) {
                cout << "no encontrado" << endl;
            }
            else {
                cout << "encontrado: " << endl;
                cout << *it << endl;
            }
        }
        else if (op == "0") {
            break;
        }
    }



    return 0;
}
