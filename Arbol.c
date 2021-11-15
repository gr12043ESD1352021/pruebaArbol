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

nodoArbol *insertarNodoArbol(nodoArbol arbol, nodoArbol nuevo){
    if(arbol == NULL){
        arbol = nuevo;
    }
    else{
        if(nuevo->dato > arbol->dato){
            arbol->der = insertarNodoArbol(arbol->der, nuevo);
        }
        else{
            arbol->izq = insertarNodoArbol(arbol->izq, nuevo);
        }
    }
    return arbol;
}

nodoArbol *insertar(nodoArbol arbol, int dato){
    if(arbol == NULL){
        arbol = crearNodoArbol(dato);
    }
    else{
        if(dato > arbol->dato){
            arbol->der = insertar(arbol->der, dato);
        }
        else{
            arbol->der = insertar(arbol->izq, dato);
        }
    }
    return arbol;
}