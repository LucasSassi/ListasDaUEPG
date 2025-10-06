#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*
NOME: LUCAS SASSI DE SOUZA
RA:25090523
LISTA: PONTEIROS 2 
*/

int exercicio1(char *strPrincipal, char *subString) {
    char *p1, *p2, *p1_temp;

    if (*subString == '\0') {
        return 1;
    }

    for (p1 = strPrincipal; *p1 != '\0'; p1++) {
        if (*p1 == *subString) {
            p1_temp = p1;
            p2 = subString;

            while (*p2 != '\0' && *p1_temp == *p2) {
                p1_temp++;
                p2++;
            }

            if (*p2 == '\0') {
                return 1;
            }
        }
    }

    return 0;
}

void exercicio2(int *ptr, int tamanho, int valor) {
    int i;
    for (i = 0; i < tamanho; i++) {
        *(ptr + i) = valor;
    }
}

void exercicio3(int *ptr, int tamanho) {
    int i;
    for (i = 0; i < tamanho; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

void exercicio4(int *ptr_b, int **ptr_c, int ***ptr_d) {

    printf("O dobro e: %d\n", (*ptr_b) * 2);

    printf("O triplo e: %d\n", (*(*ptr_c)) * 3);

    printf("O quadruplo e: %d\n", (*(*(*ptr_d))) * 4);
}

int main() {
/*

// exercicio 1

char string1[256];
char string2[256];

printf("Digite a primeira string (principal): ");
fgets(string1, sizeof(string1), stdin);
string1[strcspn(string1, "\n")] = 0;

printf("Digite a segunda string (a ser buscada): ");
fgets(string2, sizeof(string2), stdin);
string2[strcspn(string2, "\n")] = 0;

if (exercicio1(string1, string2)) {
    printf("\nA segunda string esta dentro da primeira.\n");
} else {
    printf("\nA segunda string NAO esta dentro da primeira.\n");
}

// exercicio 2

int numeros[10];
int valorParaPreencher;
int i;

printf("Digite o valor que sera usado para preencher o vetor: ");
scanf("%d", &valorParaPreencher);

exercicio2(numeros, 10, valorParaPreencher);

printf("\nO vetor preenchido com o valor %d e:\n", valorParaPreencher);
for (i = 0; i < 10; i++) {
    printf("%d ", numeros[i]);
}
printf("\n");

// exercicio 3

int numeros[8] = {10, 20, 30, 40, 50, 60, 70, 80};

printf("O vetor a ser impresso contem os seguintes elementos:\n");
    
exercicio3(numeros, 8);


// exercicio 4
int a;
int *b;
int **c;
int ***d;

printf("Digite um valor inteiro para a variavel 'a': ");
scanf("%d", &a);

b = &a;
c = &b;
d = &c;

exercicio4(b, c, d);
*/
    return 0;
}