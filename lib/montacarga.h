#ifndef _MONTACARGA_
#define  _MONTACARGA_ 0 

#include <iostream>
#include "pedidos.h"
#include "bodega.h"
#include "pedidounico.h"
#include "nodo.h"
#include "queue.h"

using namespace std;

struct montacarga {
    int tiempo = 0;
    struct queue colapedidos;


    void traerProductos(){
        if (colapedidos.isEmpty()==0){
            int cont = 1;
            while (colapedidos.isEmpty()==0){
                cout<<"Pedido #"<<cont++<<endl;
                struct nodo* punternoactual = (nodo*) colapedidos.dequeue();
                struct nodo actual = *punternoactual;
                struct pedidounico* datospedido = (pedidounico*) actual.data;
                int cantidad = datospedido->cantidad;
                struct bodega nombreb = datospedido->nombrebodega;

                int time = nombreb.retirarProducto(cantidad);

                cout<<"Se realizo en :"<<(tiempo*time)/1000<<" segundos"<<endl;
            }
          
        }
        else{
            cout<<"No hay pedidos en cola"<<endl;
        }












        /*
        cout<<"Pedido 1: "<<endl;
        int time1 = nombre1.retirarProducto(cantidad1);
        cout<<"Se realizo en :"<<(tiempo*time1)/1000<<" segundos"<<endl;
        cout<<"Pedido 2: "<<endl;
        int time2 = nombre2.retirarProducto(cantidad2);
        cout<<"Se realizo en :"<<(tiempo*time2)/1000<<" segundos"<<endl;
        */
    }
};

#endif