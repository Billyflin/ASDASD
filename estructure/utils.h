#include <iostream>
#include <cstdio>
#include <list>
#include <fstream>
#include <sstream>
#include "listVendedor.h"
//213,billy,adae,adsas,123,31,asd3,13,123,31






Vendedor falso(){
    Vendedor falso;
    falso.setId( "Pico");
    falso.setCuenta( "asdas");
    falso.setNombre("asdas");
    falso.setApellido( "asdas");
    falso.setTelefono("asdas");
    falso.setEdad("asdas");
    falso.setRut( "asdas");
    falso.setDireccion("asdas");
    falso.setProfesion("asdas");
    falso.setEdad("asdas");
    cout<<falso.telefono;
    return falso;
}

void guardarVendedor(
//        Vendedor vendedor
        ) {
    Vendedor vendedor2=falso();
    vendedor2.setTelefono("123123");
    ofstream fichero("ventas.txt", ifstream::binary);
    cout<<falso().toString();
    string buffer=vendedor2.toString();            // contiene todos los datos de vededores.h y se almacena en ventas.txt
    if (!fichero.fail()) {
        fichero<<buffer;    //se le asigna a ficheros lo que esta en toString()
        fichero.close();
    } else {
        printf("Error de Archivo\n");
    }
}




ListaVendedores leerVendedores(){
    ListaVendedores vendedores;
    ifstream input( "ventas.txt" );
    int index=0;
    for( std::string line; getline( input, line ); )
    {   Vendedor nuevo;
        string n,n2,n3,n4,n5,n6,n7,n8,n9;
        stringstream  ss(line);
        getline( ss,n, ',');
        getline( ss,n2, ',');
        getline( ss,n3, ',');
        getline( ss,n4, ',');
        getline( ss,n5, ',');
        getline( ss,n6, ',');
        getline( ss,n7, ',');
        getline( ss,n8, ',');
        getline( ss,n9, ',');
        nuevo.setCuenta(n);
        nuevo.setNombre(n2);
        nuevo.setApellido(n3);
        nuevo.setRut(n4);
        nuevo.setTelefono(n5);
        nuevo.setDireccion(n6);
        nuevo.setEdad(n7);
        nuevo.setProfesion(n8);
        nuevo.setDeuda(n9);



        printf("%s\n", line.c_str());
        printf("%s\n",nuevo.telefono.c_str());
        printf("%s\n",nuevo.nombre.c_str());

        inserta(nuevo, fin(vendedores),vendedores);
    }
    input.close();
    return vendedores;
}


