#include <iostream>
#include <cstdio>
#include <list>
#include <string>

using namespace std;


struct Cliente {

    string nombre;
    string apellido;
    string rut;
    string telefono;
    string direccion;
    string edad;
    string profesion;
    string deuda;
    string fechaCobro;
    string numerovendedor;


    string toString() {
        return nombre + "," + apellido + "," + rut + "," + telefono + "," + direccion + "," + edad + "," +
               profesion + "," + deuda + "," + fechaCobro  +  "," + numerovendedor + "\n";
    }


};



