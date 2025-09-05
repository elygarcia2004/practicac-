
#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;
    double resultado;
    int opcion;

    cout << "Digite el primer numero: ";
    cin >> numero1;
    cout << "Digite el segundo numero: ";
    cin >> numero2;

    do {
        cout << "\nOpciones:\n1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n5. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                resultado = numero1 + numero2;
                cout << "El resultado de la suma es: " << resultado << endl;
                break;
            case 2:
                resultado = numero1 - numero2;
                cout << "El resultado de la resta es: " << resultado << endl;
                break;
            case 3:
                resultado = numero1 * numero2;
                cout << "El resultado de la multiplicacion es: " << resultado << endl;
                break;
            case 4:
                if (numero2 != 0) {
                    resultado = static_cast<double>(numero1) / numero2;
                    cout << "El resultado de la division es: " << resultado << endl;
                } else {
                    cout << "No se puede dividir por cero." << endl;
                }
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }

    } while (opcion != 5);

    return 0;
}
