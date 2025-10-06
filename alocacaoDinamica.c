#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exercicio1(){

    printf("TAMANHO DE CADA TIPO DE DADO:\n");
    printf("char: %d byte(s)\n", sizeof(char));
    printf("int: %d byte(s)\n", sizeof(int));
    printf("float: %d byte(s)\n", sizeof(float));
    printf("double: %d byte(s)\n", sizeof(double));

}

void exercicio2(){ 

    typedef struct {
        char nome[50];
        int matricula;
        float p1;
        float p2;
        float p3;
    } Aluno;

    printf("\nTAMANHO DA STRUCT ALUNO: %d byte(s)\n", sizeof(Aluno));
}

void exercicio4(){
    printf("\no tamanho do vetor a ser alocado dinamicamente: ");
    int n;
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocacao de memoria.\n");
        return;
    }
    printf("Vetor alocado dinamicamente com %d elementos.\n", n);
    printf("Enderecos dos elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Endereco de vetor[%d]: %x\n", i, (void*)&vetor[i]);
    }
    printf("\n\n");

    for (int i = 0; i < n; i++) {
        printf("Digite o %dº valor do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("Valor do vetor na posicao %d: %d\n", i, vetor[i]);
    }

}

int main(){

// exercicio 1
/*
    exercicio1();

// exercicio 2

    exercicio2();

// exercicio 4
*/
    exercicio4();

    return 0; 
}