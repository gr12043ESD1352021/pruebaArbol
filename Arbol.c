#include "Arbol.h"
#include <stdlib.h>
#include <stdio.h>

nodoArbol *iniciarArbol(){
    return NULL;
}

nodoArbol *crearNodoArbol(int dato){
    nodoArbol NuevoNodo = malloc(sizeof(nodoArbol));
    NuevoNodo->dato = dato;
    NuevoNodo->izq = NULL;
    NuevoNodo->der = NULL;
    
    return NuevoNodo;
}

nodoArbol *buscar(nodoArbol arbol , int dato){
    nodoArbol rta = NULL;
    if(arbol != NULL){
        if(dato == arbol->dato){
            rta = arbol;
        }
        else{
            if(dato > arbol->dato){
                rta = buscar(arbol ->der, dato);
            }
            else{
                rta = buscar(arbol ->izq, dato);
            }
        }
    }
    return rta;
}