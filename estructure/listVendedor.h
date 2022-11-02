#include <stdio.h>
#include "vendedor.h"


#define tipoDato2 Vendedor


struct nodo2 {
    tipoDato2 dato;
    struct nodo2 *next;

    nodo2() {
        next = NULL;
    }

    nodo2(tipoDato2 x) {
        nodo2();
        dato = x;
    }
};


struct ListaVendedores {
    struct nodo2 *primero;

    ListaVendedores() {
        primero = NULL;
    }

};


/* Prototipos */

bool vacia(ListaVendedores lista);

int primero(ListaVendedores lista);

int primero(ListaVendedores lista);

int anterior(int p, ListaVendedores lista);

int siguiente(int p, ListaVendedores lista);

int fin(ListaVendedores lista);

void inserta(tipoDato2 x, int p, ListaVendedores &lista);

tipoDato2 recupera(int p, ListaVendedores lista);

int localiza(tipoDato2 x, ListaVendedores lista);

void imprime(ListaVendedores lista);

void suprime(int p, ListaVendedores &lista);

void anula(ListaVendedores &lista);


bool vacia(ListaVendedores lista) {
    return fin(lista) == primero(lista);
}

int primero(ListaVendedores lista) {
    return 1;
}

int anterior(int p, ListaVendedores lista) {
    return p - 1;
}

int siguiente(int p, ListaVendedores lista) {
    return p + 1;
}

int fin(ListaVendedores lista) {
    int c = 1;
    nodo2 *aux = lista.primero;
    while (aux != NULL) {
        aux = aux->next;
        c++;
    }
    return c;
}

void inserta(tipoDato2 x, int p, ListaVendedores &lista) {
    nodo2 *nuevo = new nodo2(x);
    nodo2 *aux = lista.primero;
    if (primero(lista) == p) {
        nuevo->next = lista.primero;
        lista.primero = nuevo;
    } else {
        for (int i = 0; i < p - 2; i++)
            aux = aux->next;
        nuevo->next = aux->next;
        aux->next = nuevo;
    }
}

tipoDato2 recupera(int p, ListaVendedores lista) {
    nodo2 *aux = lista.primero;
    for (int i = 1; i < p; i++)
        aux = aux->next;
    return aux->dato;
}

int localiza(string x, ListaVendedores lista) {

    for (int i = primero(lista); i < fin(lista); i = siguiente(i, lista))
        if (recupera(i, lista).rut == x)
            return i;
    return fin(lista);
}

void imprime(ListaVendedores vendedores) {
    for (int i = primero(vendedores); i < fin(vendedores); i++) {
        tipoDato2 x = recupera(i, vendedores);

        cout << x.cuenta<<"\n"
             << x.nombre<<"\n"
             << x.apellido<<"\n"
             << x.rut<<"\n"
             << x.telefono<<"\n"
             << x.direccion<<"\n"
             << x.edad<<"\n"
             << x.profesion<<"\n"
             << x.deuda<<"\n"
             << x.fechaDePago <<"\n" ;
    }
    printf("-------\n");
}

void suprime(int p, ListaVendedores &lista) {
    nodo2 *aux = lista.primero;
    if (primero(lista) == p)
        lista.primero = aux->next;
    else {
        nodo2 *aux2 = lista.primero;
        for (int i = 0; i < p - 2; i++)
            aux2 = aux2->next;
        aux = aux2->next;
        aux2->next = aux->next;
    }
    aux->next = NULL;
    delete aux;
}

void anula(ListaVendedores &lista) {
    while (!vacia(lista))
        suprime(primero(lista), lista);
}











