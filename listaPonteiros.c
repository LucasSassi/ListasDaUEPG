#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


void exercicio1(){
    int a = 0;
    int b = 0;
    int *p1, *p2;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);
    printf("endereço de a: %d\n", p1);
    printf("endereço de b: %d\n", p2);

    if (p1 < p2) {
        printf("p1 aponta para um endereco menor que p2\n");
    } else if (p1 > p2) {
        printf("p1 aponta para um endereco maior que p2\n");
    } else {
        printf("p1 e p2 apontam para o mesmo endereco\n");
    }
}

exercicio2(int *pa , int *pb){
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void exercicio3(char *s) {
    if (s == NULL || *s == '\0') {
        return;
    }

    char *inicio = s;
    char *fim = s + strlen(s) - 1;
    char temp;

    while (inicio < fim) {
        temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

void exercicio4(int *a, int b) {
    *a = *a + b;
}

void exercicio5(float R, float *area, float *volume) {
    *area = 4 * 3.14 * (R * R);
    *volume = (4.0 / 3.0) * 3.14 * (R * R * R);
}

int main() {

// exerecicio 1

/*
    exercicio1();


// exercicio 2
    
int a, b;
printf("Digite um numero: ");
scanf("%d", &a);
printf("Digite outro numero: ");
scanf("%d", &b);
exercicio2(&a, &b);
printf("Depois da troca, o primeiro numero é: %d\n", a);
printf("Depois da troca, o segundo numero é: %d\n", b);



// exercicio 3

char linha[202];

printf("Digite uma string (ate 200 caracteres): ");

if (fgets(linha, sizeof(linha), stdin)) {
    linha[strcspn(linha, "\n")] = '\0';

    printf("Original: \"%s\"\n", linha);

    exercicio3(linha);

    printf("Invertida: \"%s\"\n", linha);
} else {
    printf("Erro ao ler a entrada.\n");
}


// exercicio 4

int A, B;

printf("Digite o valor de A: ");
scanf("%d", &A);

printf("Digite o valor de B: ");
scanf("%d", &B);

printf("\n--- Valores antes do procedimento ---\n");
printf("Valor de A: %d\n", A);
printf("Valor de B: %d\n", B);

exercicio4(&A, B);

printf("\n--- Valores depois do procedimento ---\n");
printf("Novo valor de A: %d\n", A);
printf("Valor de B (inalterado): %d\n", B);

*/

float raio, area_esfera, volume_esfera;

    printf("digite o valor do raio da esfera: ");
    scanf("%f", &raio);

    exercicio5(raio, &area_esfera, &volume_esfera);

    printf("\n");
    printf("area da superficie: %.2f\n", area_esfera);
    printf("volume da esfera: %.2f\n", volume_esfera);
    return 0;

};
