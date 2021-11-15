/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arbol.h
 * Author: chaic
 *
 * Created on 3 de noviembre de 2021, 21:16
 */

#ifndef ARBOL_H
#define ARBOL_H

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct NodoArbol{
        int dato;
        struct nodoArbol *izq;
        struct nodoArbol *der;
    }nodoArbol;
    
    nodoArbol *iniciarArbol();
    nodoArbol *crearNodoArbol(int dato);
    nodoArbol *buscar(nodoArbol arbol , int dato);
    nodoArbol *insertarNodoArbol(nodoArbol arbol, nodoArbol nuevo);
    nodoArbol *insertar(nodoArbol arbol, int dato);
    void preorder(nodoArbol *arbol);


#ifdef __cplusplus
}
#endif

#endif /* ARBOL_H */

