# Trabalho 1 - coletor automático de lixo em C

Esse trabalho tinha como objetivo implemetar um coletor automaático de lixo em linguagem C utilizando a técnica de contagem de referências.

## Biblioteca contref.h

### Esse biblioteca é constituída de:
 Uma estrutura de lista que tem como objetivo armazenar um endereço de memória, um contandor para a quantidade de ponteiros que aponta para esse endereço e um ponteiro para o próximo endereço de memória.
#### funções:
- malloc2(tamanho): Essa função aloca um endereço de memória do tamanho especificado na chamada, armazena esse enedereço na minha estrutura de lista que está simulando a mémoria, atualiza o contador para 1 - pois existe um ponteiro apontando para esse endereço- e retorna o endereço alocado para que chamou;
- atrib2(endereço1, endereço2): Essa função tem como objetivo atribuir o endereço1 ao endereço2, ela pegar o endereço1 atualiza o contador diminuindo 1 - pois esse endereço está deixando de apontar para lá - atualiza o o contador do endereço2 para +1 - pois existe um novo ponteiro apontando para esse endereço;
- remover(): Essa função como o nome já sugerir tem como objetivo remover os lixo de memória sempre que for chamada. Como a memória está sendo simulado por uma estrutura de lista, essa função é a mesma que remover o elemento de uma lista com algumas adaptações;
- dump(): Essa função tem como objetivo mostrar como está a memória para o usuário, além disso, ela também verifica se o endereço e lixo de memória, caso ele seja, essa função com auxílio da função remover() elimina esse endereço da memória;
- imprimir(endereço): Essa função tem como objetivo imprimir o endereço e o conteúdo de uma variável do tipo int;
- imprimir2(endereço): Essa função tem como objetivo imprimir o endereço e o conteúdo de uma variável do tipo char;
