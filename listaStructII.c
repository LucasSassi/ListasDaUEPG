#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Autor: Lucas Sassi de Souza
//RA: 25090523
// Lista: struct II

int main(){ 

// exercicio 1
/*
    typedef struct pessoas {
    char nome[50];
    int idade;
} pessoas;

pessoas p[6];

for (int i = 0; i < 6; i++) {
    printf("Escreva o nome da pessoa %d: ", i + 1);
    fgets(p[i].nome, 30, stdin);
}
printf("\n");
for (int i = 0; i < 6; i++) {
    printf("digite o ano em que nasceu (pessoa: %d): ", i + 1);
    scanf("%d", &p[i].idade);
}

int idades[6];
for (int u = 0; u < 6; u++) {
    idades[u] = (p[u].idade + p[u].idade + p[u].idade) / 3;
}

int maior = idades[0];
for (int i = 1; i < 6; i++) {
    if (idades[i] < maior) {
        maior = idades[i];
    }
}
printf("\n");
printf("Mais velho: %d\n", ((maior - 2025) * -1));

int menor = idades[0];
for (int i = 1; i < 6; i++) {
    if (idades[i] > menor) {
        menor = idades[i];
    }
}
printf("Mais novo: %d\n", (menor - 2025) * -1);

// exercicio 2

    typedef struct atletas {
    char nome[50];
    int idade;
    float altura;
} atletas;

atletas p[6];

for (int i = 0; i < 6; i++) {
    printf("Escreva o nome do atleta %d: ", i + 1);
    fgets(p[i].nome, 30, stdin);
    p[i].nome[strcspn(p[i].nome, "\n")] = 0;
    printf("Escreva o esporte do atleta %d: ", i + 1);
    fgets(p[i].nome, 30, stdin);
    p[i].nome[strcspn(p[i].nome, "\n")] = 0;
}
printf("\n");
for (int i = 0; i < 6; i++) {
    printf("Digite a idade (pessoa: %d): ", i + 1);
    scanf("%d", &p[i].idade);
}
for (int i = 0; i < 6; i++) {
    printf("Digite a altura (pessoa: %d): ", i + 1);
    scanf("%f", &p[i].altura);
}

int idades[6];
for (int u = 0; u < 6; u++) {
    idades[u] = (p[u].idade + p[u].idade + p[u].idade) / 3;
}

int maior = idades[0];
for (int i = 1; i < 6; i++) {
    if (idades[i] > maior) {
        maior = idades[i];
    }
}
printf("\n");
printf("Mais velho: %d\n", maior);


int altura[6];
for (int u = 0; u < 6; u++) {
    altura[u] = (p[u].altura + p[u].altura + p[u].altura) / 3;
}
float maiorAltura = altura[0];
for (int i = 1; i < 6; i++) {
    if (altura[i] > maiorAltura) {
        maiorAltura = altura[i];
    }
}
printf("Atleta mais alto tem: %f\n", maiorAltura);
*/
// exercicio 3


    return 0;
}