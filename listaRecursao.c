#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
NOME: Lucas Sassi de Souza
RA: 25090523
Lista: Recursao
Data:01/09/2025
*/

int exercicio1(int n){
    if (n ==  1){
        return 1;
    }

    return (n) + exercicio1(n-1);
}

void exercicio2(int n){

    if (n > 0){
        printf("colocando na pilha %d \n", n);
        exercicio2(n - 1);
         
}
printf("desempilhando %d\n ", n);
}

void exercicio3(int n){
    if (n == 0){
        return;
    }
    printf("%d ", n);
    exercicio3(n-1);
}

int exercicio6(int n, int i){
    if (n ==  (i - 1)){
        return 1;
    }

    return (n) * exercicio6(n-1, i);
}

int exercicio7(int n, int i){

    if (i == 0){
        return 0;
    }

    return n + (exercicio7(n, i-1));
}

int exercicio8(int n){
    if (n ==  1){
        return 1;
    }

    return (n) * exercicio8(n - 1);
}

int main(){


// exercicio 1

/*
int n;
exercicio1(3);
n = exercicio1(3);
printf("\n%d\n", n);
*/

// exercicio 2
/*
int n; 
printf("Escreva um numero: ");
scanf("%d", &n);
exercicio2(n);
printf("\n");
*/

// exercicio 3

/*
int n; 
printf("Escreva um numero: ");
scanf("%d", &n);
exercicio3(n);
printf("\n");
*/

// exercicio 6

/*
int i = 0, n = 0;
printf("Digite um numero: ");
scanf("%d", &n);
printf("Digite outro numero (menor que o anterior): ");
scanf("%d", &i);
exercicio6(n, i);
printf("\n%d\n", exercicio6(n, i));
*/

// exercicio 7

/*
int i = 0, n = 0;
printf("Digite um numero: ");
scanf("%d", &n);
printf("Digite outro numero: ");
scanf("%d", &i);
exercicio7(n, i);
printf("\n%d\n", exercicio7(n, i));
*/

// exercicio 8

/*
int n = 0;
printf("Digite um numero: ");
scanf("%d", &n);
exercicio8(n);
printf("\n%d\n", exercicio8(n));
*/

return 0;


}