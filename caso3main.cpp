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

    struct stack columnaarroz;
    columnaarroz.push(&a1);
    columnaarroz.push(&a2);
    columnaarroz.push(&a3);
    columnaarroz.push(&a4);
    columnaarroz.push(&a5);
    columnaarroz.push(&a6);

    struct bodega bodegaarroz;
    bodegaarroz.columnas = columnaarroz;

    bodegaarroz.retirarProducto(70);

    cout<<bodegaarroz.verCantProductos()<<" productos"<<endl;

    cout<<bodegaarroz.columnas.stackList.getSize()<<" size"<<endl;


}