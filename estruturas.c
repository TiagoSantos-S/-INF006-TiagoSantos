#include <stdio.h>
#include <stdlib.h>

typedef struct Dimensao{
    float altura;
    float profundidade;
    float largura;
}Dimensao;

typedef struct Produto{
    float preço;
    char * nome;
    char * codigo;
    Dimensao * dimensao;
};

