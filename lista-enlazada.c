#include <stdlib.h>
#include <stdio.h>

typedef struct elemento{
    int dato;
    struct elemento *siguiente;
}nodo_t;

nodo_t *crea_lista(){
    nodo_t *cabeza = NULL;
    return(cabeza);

}

nodo_t *crear_nodo (int valor){
    nodo_t *a;
    a=malloc(sizeof(nodo_t));
    a->dato=valor;
    a->siguiente=NULL;
    return(a);
}

void insertar_al_inicio(nodo_t **cabeza, int valor){
    nodo_t *nuevo;
    nuevo = crear_nodo(valor);
    nuevo->siguiente = *cabeza;
    *cabeza = nuevo;
}

void imprimir_lista(nodo_t *cabeza){
    nodo_t *actual;
    printf("La lista es:\n");
    for(actual=cabeza;actual!=NULL;actual=actual->siguiente){
        printf("%d\n", actual->dato);
    }
}

int main(){
    nodo_t *cabeza = crea_lista();
    int i;
    int valor;
    for(i=0;i<100;i++){
        insertar_al_inicio(&cabeza,i);
    }
    imprimir_lista(cabeza);
}

