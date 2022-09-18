#ifndef _CONTREF_H
#define _CONTREF_H

typedef struct ende{
    int cont;
    void* end;
    struct ende* prox;
}Endereco;

extern Endereco* memoria;

void *malloc2(int tamanho);

void atrib2(void** endereco1, void* endereco2);

void remover();

void dump();

void imprimir(void* item);

void imprimir2(char* item);

#endif