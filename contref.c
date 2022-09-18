#include <stdio.h>
#include<stdlib.h>
#include "contref.h"

Endereco* memoria = NULL;

void *malloc2(int tamanho){
    Endereco* end = malloc(sizeof(Endereco));

    end->end = malloc(tamanho);
    end->cont = 1;
    end->prox = NULL;

    if(memoria != NULL)
        end->prox = memoria;

    memoria = end;

    return memoria->end;
}

void atrib2(void** endereco1, void* endereco2){
    Endereco* aux = memoria;
    
    while(aux->end != *endereco1){
        aux = aux->prox;
    }
    aux->cont -= 1;

    if(endereco2 != NULL){
        aux = memoria;
        while(aux->end != endereco2){
            aux = aux->prox;
        }
        aux->cont += 1;
    }

    *endereco1 = endereco2;
}

void remover(){
    Endereco* ant = NULL;
    Endereco* p = memoria;

    while(p != NULL && p->cont != 0){
        ant = p;
        p = p->prox;
    }

    if(p == NULL){
        return ;
    }else if(ant == NULL){
        memoria = p->prox;
    }else{
        ant->prox = p->prox;
    }
    free(p);
}

void dump(){
    Endereco* aux = memoria;
    int verificador = 0;

    printf("\n \t\t\t MEMORIA \n");
    if(aux == NULL)
        printf("NULL\n");

    while(aux != NULL){
        printf("Endereco: %d contador: %d\n",aux->end,aux->cont);
        if(aux->cont == 0){
            verificador = 1;
            printf("\t\tEndereco sera liberado, pois esta com 0 referencia!\n");
            remover();
        }
        aux = aux->prox;
    }
    if(verificador == 1)
        dump();
    printf("\n");
}

void imprimir(void* item){
    if(item != NULL)
    printf("conteudo de %d = %d\n", item, *((int*)(item)));
    else
        printf("NULL\n");
}

void imprimir2(char* item){
    if(item != NULL)
        printf("conteudo de %d = %c\n", item, *(item));
    else
        printf("NULL\n");
}