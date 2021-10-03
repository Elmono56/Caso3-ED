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

    //-------------------------------------------ARROZ--------------------------------------------
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

    cout<<"------------------------------ARROZ------------------------------------------------------"<<endl;

    bodegaarroz.retirarProducto(70);
    bodegaarroz.retirarProducto(15);

    //cout<<bodegaarroz.verCantProductos()<<" quedan productos en stock"<<endl;

    cout<<"Repartidos en " << bodegaarroz.columnas.stackList.getSize()<<" columnas"<<endl;

    bodegaarroz.retirarProducto(100);

    //-------------------------------------------FRIJOLES--------------------------------------------
    struct paleta frijoles1 = {40};
    struct paleta frijoles2 = {40};
    struct paleta frijoles3 = {40};
    struct paleta frijoles4 = {40};
    struct paleta frijoles5 = {40};
    struct nodo f1;
    f1.data = &frijoles1;
    struct nodo f2;
    f2.data = &frijoles2;
    struct nodo f3;
    f3.data = &frijoles3;
    struct nodo f4;
    f4.data = &frijoles4;
    struct nodo f5;
    f5.data = &frijoles5;
    struct stack columnafrijoles;
    columnafrijoles.push(&f1);
    columnafrijoles.push(&f2);
    columnafrijoles.push(&f3);
    columnafrijoles.push(&f4);
    columnafrijoles.push(&f5);

    struct bodega bodegafrijoles;
    bodegafrijoles.columnas = columnafrijoles;
    
    cout<<"------------------------------FRIJOLES------------------------------------------------------"<<endl;

    bodegafrijoles.retirarProducto(75);

    cout<<bodegafrijoles.verCantProductos()<<" quedan productos en stock"<<endl;

    cout<<"Repartidos en " << bodegafrijoles.columnas.stackList.getSize()<<" columnas"<<endl;

}