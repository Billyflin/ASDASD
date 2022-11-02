#include <iostream>
#include <cstdio>
#include "estructure/utils.h"

#define Lista vendedores;

void eliminarPorRut();
void buscarPorRut();
void crearVendedor();



ListaVendedores vendedores;


int main() {
    vendedores=leerVendedores();
    guardarVendedor();
    int opcion;
    do {

        cout<<("ingrese su opcion: \n");
        cout<<("1) imprime\n");
        cout<<("2) Eliminar Vendedor por rut\n");
        cout<<("3) crear vendedor\n");
        cout<<("4) busca por rut Vendedor\n");
        cout<<("5) Salir\n");

        cout<< "Ingrese su opcion: " << "\n";
        cin >> opcion;

        switch (opcion) {
            case 1:
                imprime(vendedores);
                break;
            case 2:
                eliminarPorRut();
                break;
            case 3:
                crearVendedor();
                break;
            case 4:
                buscarPorRut();
                break;
            case 5:
                break;
            default:
                printf("Opcion incorrecta\n");
                break;
        }fflush(stdin);
    } while (opcion != 5);

    return 0;
}

void eliminarPorRut(){
    string n;
    cin >> n;
    suprime(localiza(n,vendedores), vendedores);
    fflush(stdin);
}

void buscarPorRut(){
    string n;
    cin >> n;
    recupera(localiza(n,vendedores), vendedores);
    fflush(stdin);
}





void crearVendedor() {
    Vendedor nuevo;
    string n,n2,n3,n4,n5,n6,n7,n8,n9;
    printf("Ingrese la Cuenta Bancaria para el vendedor: \n");
    cin >> n;
    nuevo.setCuenta(n);
    fflush(stdin);
    printf("Ingrese el nombre del vendedor: \n");
    cin >> n2;
    nuevo.setNombre(n2);
    fflush(stdin);
    printf("Ingrese el Apellido del vendedor:  \n");
    cin >> n3;
    nuevo.setCuenta(n3);
    fflush(stdin);
    printf("Ingrese el Rut del vendedor:  \n");
    cin >> n4;
    nuevo.setCuenta(n4);
    fflush(stdin);
    printf("Ingrese el Telefono para el contacto:  \n");
    cin >> n5;
    nuevo.setCuenta(n5);
    fflush(stdin);
    printf("Ingrese la Direccion del vendedor:  \n");
    cin >> n6;
    nuevo.setCuenta(n6);
    fflush(stdin);
    printf("Ingrese la Edad para el contacto:  \n");
    cin >> n7;
    nuevo.setCuenta(n7);
    fflush(stdin);
    printf("Ingrese la Profesion del vendedor:  \n");
    cin >> n8;
    nuevo.setCuenta(n8);
    fflush(stdin);
    printf("Ingrese la Deuda del vendedor:  \n");
    cin >> n9;
    nuevo.setCuenta(n9);
    fflush(stdin);

    cout<<n5<<"\n";
    cout<<n3.c_str()<<"\n";
    cout<<nuevo.nombre<<"\n";

    cout<<nuevo.telefono<<"\n";

//    guardarVendedor(nuevo);
}









