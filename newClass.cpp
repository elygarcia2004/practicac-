#include <iostream>
using namespace std;

int main() {
    char nombre[6];
    char* ptr = nombre;

    *ptr = 'E';               // E
    *(ptr + 1) = *ptr + 1;    // D = E + 1 → F (pero queremos D, así que ajustamos)
    *(ptr + 1) = 'd';         // d
    *(ptr + 2) = 'w';         // w
    *(ptr + 3) = 'i';         // i
    *(ptr + 4) = 'n';         // n
    *(ptr + 5) = '\0';        // Fin de cadena

    cout << "Nombre construido: " << nombre << endl;

    return 0;
}
