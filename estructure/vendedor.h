#include <iostream>
#include <cstdio>
#include <string>
#include "list.h"

using namespace std;

class Vendedor {
public:
    ListaClientes clientes;
    string id;
    string cuenta;
    string nombre;
    string apellido;
    string rut;
    string telefono;
    string direccion;
    string edad;
    string profesion;
    string deuda;
    string fechaDePago;




    string toString() {
        return cuenta + "," + nombre + "," + apellido + "," + rut + "," + telefono + "," + direccion + "," +
               edad + "," + profesion + "," + deuda  +  "," + fechaDePago + "\n";
    }


    void setClientes(const ListaClientes &clientes) {
        Vendedor::clientes = clientes;
    }

    void setId(const string &id) {
        Vendedor::id = id;
    }

    void setCuenta(const string &cuenta) {
        Vendedor::cuenta = cuenta;
    }

    void setNombre(const string &nombre) {
        Vendedor::nombre = nombre;
    }

    void setApellido(const string &apellido) {
        Vendedor::apellido = apellido;
    }

    void setRut(const string &rut) {
        Vendedor::rut = rut;
    }

    void setTelefono(const string &telefono) {
        Vendedor::telefono = telefono;
    }

    void setDireccion(const string &direccion) {
        Vendedor::direccion = direccion;
    }

    void setEdad(const string &edad) {
        Vendedor::edad = edad;
    }

    void setProfesion(const string &profesion) {
        Vendedor::profesion = profesion;
    }

    void setDeuda(const string &deuda) {
        Vendedor::deuda = deuda;
    }

    void setFechaDePago(const string &fechaDePago) {
        Vendedor::fechaDePago = fechaDePago;
    }

};










