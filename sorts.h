#ifndef SORTS_H
#define SORTS_H

#include <iostream>
#include <string>

using namespace std;

struct Producto {
    int id;
    string nombre;
    string categoria;
    float precio;
    int stock;
};

void insertionSortPrecio(Producto productos[], int n) {
    for (int i = 1; i < n; i++) {
        Producto aux = productos[i];
        int j = i - 1;

        while (j >= 0 && productos[j].precio > aux.precio) {
            productos[j + 1] = productos[j];
            j--;
        }

        productos[j + 1] = aux;
    }
}

void insertionSortStock(Producto productos[], int n) {
    for (int i = 1; i < n; i++) {
        Producto aux = productos[i];
        int j = i - 1;

        while (j >= 0 && productos[j].stock > aux.stock) {
            productos[j + 1] = productos[j];
            j--;
        }

        productos[j + 1] = aux;
    }
}

void mostrarProductos(Producto productos[], int n) {
    cout << "\nProductos:\n";

    for (int i = 0; i < n; i++) {
        cout << productos[i].id << ". "
             << productos[i].nombre
             << " | " << productos[i].categoria
             << " | $" << productos[i].precio
             << " | Stock: " << productos[i].stock
             << endl;
    }
}

#endif