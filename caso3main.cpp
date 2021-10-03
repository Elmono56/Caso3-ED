#include <iostream>
#include "lib/bodega.h"
#include "lib/pedidos.h"
#include "lib/montacarga.h"
#include "lib/nodo.h"
#include "lib/listadoble.h"
#include "lib/stack.h"
#include "lib/paletas.h"

using namespace std;

int main() {


    struct paleta arroz1 = {25};
    struct paleta arroz2 = {25};
    struct paleta arroz3 = {25};
    struct paleta arroz4 = {25};
    struct paleta arroz5 = {25};
    struct paleta arroz6 = {25};

    struct nodo a1;
    a1.data = &arroz1;

    struct nodo a2;
    a2.data = &arroz2;

    struct nodo a3;
    a3.data = &arroz3;

    struct nodo a4;
    a4.data = &arroz4;
    
    struct nodo a5;
    a5.data = &arroz5;

    struct nodo a6;
    a6.data = &arroz6;

    //struct listadoble columnaa1;

    struct stack columnaarroz;

    //columnaarroz.stackList=columnaa1;

    columnaarroz.push(&a1);

    columnaarroz.push(&a2);

    columnaarroz.push(&a3);

    columnaarroz.push(&a4);

    columnaarroz.push(&a5);

    columnaarroz.push(&a6);

    //nodo* paleta1 = (nodo*) columnaarroz.pop();

    //struct paleta* hola = (paleta*) paleta1->data;

    //cout<<hola->cantproducto<<" hola cant"<<endl;

    struct bodega bodegaarroz; //={columnaarroz};
    bodegaarroz.columnas = columnaarroz;

    //bodegaarroz.columnas.push(paleta1);

    //paleta1 = (nodo*) bodegaarroz.columnas.pop();

    //hola = (paleta*) paleta1->data;

    //cout<<hola->cantproducto<<" desde bodega hola cant"<<endl;
    bodegaarroz.retirarProducto(80);

    int cantidad =bodegaarroz.verCantProductos();

    cout<<cantidad<<endl;















    /*
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
    */
}