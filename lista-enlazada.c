#include <stdlib.h>
#include <stdio.h>

typedef struct  nodo {
    int val;
    struct node * sig;
}nodo_t;

int main()
{   //Se crean 4 nodos en memoria, sin valores no enlazados
    nodo_t *cabeza = (nodo_t*) malloc(sizeof(nodo_t));    
    nodo_t *nodoa =  (nodo_t*) malloc(sizeof(nodo_t));
    nodo_t *nodob =  (nodo_t*) malloc(sizeof(nodo_t));
    nodo_t *nodoc =  (nodo_t*) malloc(sizeof(nodo_t));
    nodo_t *nodo_actual;
    //Asignar valores.

    cabeza->sig = nodoa;
    nodoa->sig  = nodob;
    nodob->sig  = nodoc;
    nodoc->sig  = NULL;

    cabeza->val = 1;
    nodoa->val  = 2;
    nodob->val  = 3;
    nodoc->val  = 4;

    nodo_actual=cabeza;
    while(nodo_actual->sig!=NULL){
        printf("Valor = %d\n", nodo_actual->val);
        nodo_actual = nodo_actual->sig;

    }


}