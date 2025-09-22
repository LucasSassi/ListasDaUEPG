#include <stdio.h>
#include <stdlib.h>
#include <string.h>



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

int main() {

    // exerecicio 1

/*
exercicio1();
*/

    // exercicio 2
    
int a, b;
printf("Digite um numero: ");
scanf("%d", &a);
printf("Digite outro numero: ");
scanf("%d", &b);
exercicio2(&a, &b);
printf("Depois da troca, o primeiro numero é: %d\n", a);
printf("Depois da troca, o segundo numero é: %d\n", b);

    return 0;

};
