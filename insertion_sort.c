#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define TAM 100000

void insertion_sort(int *A, int size){
    for(int j = 1; j < size; j = j+1){
        int key = A[j];
        int i = j - 1;
        while(i >= 0 && A[i] > key){
            A[i+1] = A[i];
            i = i - 1;
        }
        A[i+1] = key;
    }
}

void print_array(int * valores, int tam){
    printf("\n[");
    for(int i = 0; i < tam; i++){
        if(i < tam-1){
            printf("%d, ", valores[i]);    
        }
    }
    printf("%d]\n", valores[tam-1]);
}

int main(){
    srand(time(NULL));
    int * valores = malloc(TAM * sizeof(int)); // Retorna o endereço de memória
    
    for(int i = 0; i < TAM; i++){
        valores[i]= rand()%100; // Rand - gerar numeros aleatórios
    }
    print_array(valores, TAM);
    time_t inicio = clock();
    insertion_sort(valores, TAM);
    time_t final = clock();
    float diferença = (final - inicio)/CLOCKS_PER_SEC;
    print_array(valores, TAM);
    printf("Para ordenar o array foram gastos %.6f\n", diferença);
    
    return 0;
}