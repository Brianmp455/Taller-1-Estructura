#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H

#include <iostream>

template <typename T>
struct Nodo {
    T dato;
    Nodo* siguiente;
};

template <typename T>
class ListaEnlazada {
private:
    Nodo<T>* cabeza;

public:
    ListaEnlazada();
    ~ListaEnlazada();
    void agregar(T dato);
    bool eliminar(int id);
    Nodo<T>* buscar(int id);
    Nodo<T>* buscarPorNombre(std::string nombre);
    Nodo<T>* getCabeza();
};

#endif