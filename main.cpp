#include <iostream>
#include <string>
#include "sorts.h"

using namespace std;

int main() {

    Producto productos[6] = {
        {1, "Dri-FIT", "Playera", 250, 12},
        {2, "Oversize", "Playera", 300, 8},
        {3, "Training", "Short", 150, 15},
        {4, "Windbreaker", "Rompevientos", 300, 5},
        {5, "Compression Short Girl", "Short", 170, 10},
        {6, "Training Pants Girl", "Leggins", 200, 9}
    };

    int opcion;

    do {
        cout << "___________________________________\n";
        cout << "FYNIX\n";
        cout << "1. Mostrar todos los productos\n";
        cout << "2. Ordenar por precio\n";
        cout << "3. Ordenar por stock\n";
        cout << "4. Salir del sistema\n";
        cout << "Opcion: ";
        cin >> opcion;
        cout << "___________________________________\n";

        if (opcion == 1) {
            cout << "1. Mostrar todos los productos\n";
            mostrarProductos(productos, 6);
        }
        else if (opcion == 2) {
            cout << "2. Ordenar por precio\n";
            insertionSortPrecio(productos, 6);
            mostrarProductos(productos, 6);
        }
        else if (opcion == 3) {
            cout << "3. Ordenar por stock\n";
            insertionSortStock(productos, 6);
            mostrarProductos(productos, 6);
        }
        else if (opcion == 4) {
            cout << "Fin del programa.\n";
        }
        else {
            cout << "Selecciona una opción valida.\n";
        }

    } while (opcion != 4);

    return 0;
}