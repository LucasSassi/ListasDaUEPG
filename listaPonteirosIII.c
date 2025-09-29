#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>

/*
NOME: LUCAS SASSI DE SOUZA
RA:25090523
LISTA: PONTEIROS 3 
*/

void exercicio1( float *vet[10] ) {

    printf("O endereco do primeiro elemento do vetor é: %d\n", &vet[0]);
    printf("O endereco do segundo elemento do vetor é: %d\n", &vet[1]);
    printf("O endereco do terceiro elemento do vetor é: %d\n", &vet[2]);
    printf("O endereco do quarto elemento do vetor é: %d\n", &vet[3]);
    printf("O endereco do quinto elemento do vetor é: %d\n", &vet[4]);
    printf("O endereco do sexto elemento do vetor é: %d\n", &vet[5]);
    printf("O endereco do setimo elemento do vetor é: %d\n", &vet[6]);
    printf("O endereco do oitavo elemento do vetor é: %d\n", &vet[7]);
    printf("O endereco do nono elemento do vetor é: %d\n", &vet[8]);
    printf("O endereco do decimo elemento do vetor é: %d\n", &vet[9]);
};

void exercicio2( int *matriz[3][3] ) {

    printf("Enderecos dos elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereco de matriz[%d][%d]: %p\n", i, j, &matriz[i][j]);
        }
    }
}


int main() {

// exercicio 1

    int vet[10];
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº valor do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    exercicio1( &vet );

// exercicio 2
/*
int matriz[3][3];

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("Digite o valor para a posicao [%d][%d]: ", i, j);
        scanf("%d", &matriz[i][j]);
    }
}

exercicio2( &matriz );
*/
    return 0;
}