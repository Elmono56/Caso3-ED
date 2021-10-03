#ifndef _MONTACARGA_
#define  _MONTACARGA_ 0 

#include <iostream>
#include "pedidos.h"
#include "bodega.h"

using namespace std;

struct montacarga {
    int tiempo = 0;
    int cantidad1=0;
    int cantidad2=0;
    struct bodega nombre1;
    struct bodega nombre2;


    void traerProductos(){
        cout<<"Pedido 1: "<<endl;
        int time1 = nombre1.retirarProducto(cantidad1);
        cout<<"Se realizo en :"<<(tiempo*time1)/1000<<" segundos"<<endl;
        cout<<"Pedido 2: "<<endl;
        int time2 = nombre2.retirarProducto(cantidad2);
        cout<<"Se realizo en :"<<(tiempo*time2)/1000<<" segundos"<<endl;

    }
};

#endif