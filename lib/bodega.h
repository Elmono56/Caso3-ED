#ifndef _BODEGA_
#define _BODEGA_ 0

#include <iostream>
#include "listadoble.h"
#include "stack.h"
#include "paletas.h"

using namespace std;

struct bodega {
    
    struct stack columnas;


    void retirarProducto(int restar){
        
        if (columnas.isEmpty()==0){

            nodo* nodop = (nodo*) columnas.pop();
            paleta* paleta1 = (paleta*) nodop->data;
            
            while (restar!=0 & paleta1->cantproducto!=0){
                paleta1->cantproducto=paleta1->cantproducto-1;
                restar--;
            }
            if (restar>0){
                retirarProducto(restar);
            }
            if (paleta1->cantproducto>0){
                columnas.push(paleta1);
            }
            if (restar==0){
                cout<<"Los productos se consiguieron en x tiempo"<<endl;
            }
        }
        else{
            cout<<"Imposible"<<endl;
        }
    }

    int verCantProductos(){
        if (columnas.isEmpty()==0){
            nodo* puntero = columnas.stackList.start;
            int cantidad=0;
            while (puntero!=nullptr){
                    paleta* paleta1 = (paleta*) puntero->data;
                    cantidad = cantidad + paleta1->cantproducto;
                    puntero = puntero->next;
                    cout<<"Hola"<<endl;
            }
            return cantidad;
        }
        else{
            return 0;
        }
    }
};

#endif