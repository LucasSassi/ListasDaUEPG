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

struct Cadastro {
    char nome[100];
    int idade;
    char endereco[200];
};

struct Cadastro* alocarVetor(int N) {
    struct Cadastro* vetor = (struct Cadastro*) malloc(N * sizeof(struct Cadastro));
    if (vetor == NULL) {
        printf("Erro na alocacao de memoria!\n");
        exit(1);
    }
    return vetor;
}

void preencherDados(struct Cadastro* vetor, int N) {
    printf("\n--- Insercao de Dados ---\n");
    for (int i = 0; i < N; i++) {
        printf("\nCadastro %d:\n", i + 1);

        printf("  Digite o nome: ");
        while (getchar() != '\n');
        fgets(vetor[i].nome, sizeof(vetor[i].nome), stdin);

        printf("  Digite a idade: ");
        scanf("%d", &vetor[i].idade);

        printf("  Digite o endereco: ");
        while (getchar() != '\n');
        fgets(vetor[i].endereco, sizeof(vetor[i].endereco), stdin);
    }
}

void exercicio3() {
    int numero_de_cadastros;

    printf("Digite o numero total de cadastros: ");
    scanf("%d", &numero_de_cadastros);
    
    if (numero_de_cadastros <= 0) {
        printf("Numero invalido.\n");
        return;
    }

    struct Cadastro* meus_cadastros = alocarVetor(numero_de_cadastros);

    preencherDados(meus_cadastros, numero_de_cadastros);

    printf("\n--- Dados Cadastrados ---\n");
    for (int i = 0; i < numero_de_cadastros; i++) {
        printf("\nCadastro %d:\n", i + 1);
        printf("  Nome: %s", meus_cadastros[i].nome);
        printf("  Idade: %d\n", meus_cadastros[i].idade);
        printf("  Endereco: %s", meus_cadastros[i].endereco);
    }

    free(meus_cadastros);
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

int* criarEPreencherVetorValidado(int *tamanhoPtr) {
    do {
        printf("Digite um valor inteiro positivo para N: ");
        scanf("%d", tamanhoPtr);

        if (*tamanhoPtr <= 0) {
            printf("Valor invalido! Por favor, digite um numero maior que zero.\n");
        }
    } while (*tamanhoPtr <= 0);

    int *vetor = (int*) malloc(*tamanhoPtr * sizeof(int));
    if (vetor == NULL) {
        printf("Erro de alocacao de memoria!\n");
        exit(1);
    }

    printf("\n--- Digite os %d elementos do vetor ---\n", *tamanhoPtr);
    for (int i = 0; i < *tamanhoPtr; i++) {
        do {
            printf("Digite o valor para a posicao %d: ", i);
            scanf("%d", &vetor[i]);

            if (vetor[i] < 2) {
                printf("Valor invalido! O numero deve ser maior ou igual a 2.\n");
            }
        } while (vetor[i] < 2);
    }

    return vetor;
}

void exercicio5() {
    int N;
    int *V;

    V = criarEPreencherVetorValidado(&N);

    printf("\n--- Vetor final preenchido ---\n");
    printf("V = [ ");
    for (int i = 0; i < N; i++) {
        printf("%d ", V[i]);
    }
    printf("]\n");

    free(V);
}

int main(){

// exercicio 1

    exercicio1();

// exercicio 2

    exercicio2();

// exercicio 3

    exercicio3();

// exercicio 4

    exercicio4();

// exercicio 5

    exercicio5();
    
    return 0; 
}