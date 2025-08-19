#include <stdlib.h>
#include <stdio.h>
#include <math.h>

exercicio1(int nmr, int nmr2, int nmr3) {
    for(int i = nmr2; i <= nmr3; i++) {
        if (i % nmr == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

exercicio2(int hora, int minuto, int segundo) {
    if (hora < 0 || hora > 23 || minuto < 0 || minuto > 59 || segundo < 0 || segundo > 59) {
        printf("Horario invalido\n");
    } else {
        printf("Horario valido\n");
    }

    int horario = hora * 3600 + minuto * 60 + segundo;
    printf("Convertido em segundos: %d\n", horario);
}

execicio3(int numero) {
    int numeroFrente, numeroTras, verificacao;
    if (numero < 1000 || numero > 10000) {
        printf("Numero invalido\n");
    } else {
        numeroFrente = numero / 100;
        numeroTras = numero % 100;
        verificacao = numeroFrente + numeroTras;

        if (verificacao * verificacao == numero) {
            return 1;
        } else {
            return 0;
        }
    }
}

exercicio5(int numero4){
    int i, j, fatorial = 1;
    for (i = numero4; i >= 1; i--){
        fatorial = fatorial * i;
    }
    return fatorial;
}

exercicio6(int numero7){
    for (int i = 2; i < numero7/2; i++){
        if (numero7 % i == 0){
            return 0;
        }
    }
    return -1;
}

exercicio7(int a, int b, int c){
    int media = (a + b + c)/ 3;
    return media;
}


int main (){
// exercicio 1
/*
int nmr, nmr2, nmr3;
printf("Digite um numero: ");
scanf("%d", &nmr);
printf("Digite o primeiro numero do intervalo fechado: ");
scanf("%d", &nmr2);
printf("Digite o segundo numero do intervalo fechado: ");
scanf("%d", &nmr3);
exercicio1(nmr, nmr2, nmr3);
*/
// exercicio 2
/*
int horario, hora, minuto, segundo;
printf("Digite um horario no formato (hh:mm:ss): ");
scanf("%d:%d:%d", &hora, &minuto, &segundo);
exercicio2(hora, minuto, segundo);
*/
// exercicio 3
/*
int numero1;
printf("Digite um numero: ");
scanf("%d", &numero1);
execicio3(numero1);
int resposta = execicio3(numero1);
printf("Retorno: %d\n", resposta);
*/
// exercicio 4
/*

//

*/
// exercicio 5
/*
int numero2;
printf("Digite um numero: ");
scanf("%d", &numero2);
exercicio4(numero2);

printf("Fatorial de %d: %d\n", numero2, exercicio5(numero2));
*/
// exercicio 6
/*
int numero7;
printf("Digite um numero: ");
scanf("%d", &numero7);
exercicio6(numero7);
printf("Retorno: %d\n", exercicio6(numero7));
*/
// exercicio 7
/*
int a, b, c;

printf("Digite um numero: ");
scanf("%d", &a);
printf("Digite outro: ");
scanf("%d", &b);
printf("Digite outro: ");
scanf("%d", &c);
exercicio7(a, b, c);

printf("A media é: %d\n", exercicio7(a, b, c));
*/
    return 0;
}   