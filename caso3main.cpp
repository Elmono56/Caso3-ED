#include <iostream>
#include "lib/bodega.h"
#include "lib/pedidos.h"
#include "lib/montacarga.h"
#include "lib/nodo.h"
#include "lib/listadoble.h"
#include "lib/stack.h"

using namespace std;

int main() {

    //bodega = {columnas,paletas,unidades}
    struct bodega arroz = {10,15,24}; 
    struct bodega frijoles = {8,20,15};
    struct bodega atun = {12,30,30};

    struct nodo nodo1;
    struct nodo nodo2;
    struct nodo nodo3;

    nodo1.data = &arroz;
    nodo2.data = &frijoles;
    nodo3.data = &atun;


    cout<<arroz.columnas<<endl;

    struct listadoble lista;

    lista.addToBegining(&nodo1);
    lista.addToBegining(&nodo2);

    int cant = lista.getSize();

    cout<<cant<<endl;

    struct stack pila;

    int vacia = pila.isEmpty();

    cout<<vacia<<endl;

    pila.stackList = lista;

    vacia = pila.isEmpty();

    cout<<vacia<<endl;
}