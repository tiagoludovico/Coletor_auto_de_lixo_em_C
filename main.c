#include <stdio.h>
#include<stdlib.h>
#include "libconteref.h"

int main(void){
    int* v = malloc2(sizeof(int));
    int* w = malloc2(sizeof(int));
    char* a = malloc2(sizeof(char));
    char* b = malloc2(sizeof(char));

    *v = 10;
    *w = 20;
    *a = 'b';
    *b = 'r';

    dump();
    imprimir(v);
    imprimir(w);
    imprimir2(a);
    imprimir2(b);

    atrib2(&v,w);
    atrib2(&b,a);

    dump();
    imprimir(v);
    imprimir(w);
    imprimir2(a);
    imprimir2(b);

    atrib2(&a,NULL);

    dump();
    imprimir(v);
    imprimir(w);
    imprimir2(a);
    imprimir2(b);

    atrib2(&b,NULL);

    dump();
    imprimir(v);
    imprimir(w);
    imprimir2(a);
    imprimir2(b);

    atrib2(&w,NULL);

    dump();
    imprimir(v);
    imprimir(w);
    imprimir2(a);
    imprimir2(b);

    atrib2(&v,NULL);

    dump();
    imprimir(v);
    imprimir(w);
    imprimir2(a);
    imprimir2(b);

    system("pause");
    return 0;
}