#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
NOME: Lucas Sassi de Souza
RA: 25090523
Lista: Funcoes
Data: 18/10/2023
*/


void par_impar(int nmr) {
    if (nmr % 2 == 0){
        printf("O numero e par");
    } else {
        printf("O numero e impar");
    }
}

void meses(int mes){
    switch (mes)
    {
    case 1:
        printf("Janeiro, 31 dias");
        break;
    case 2:
        printf("Fevereiro, 29 dias");
        break;
    case 3:
        printf("Março, 31 dias");
        break;
    case 4:
        printf("Abril, 30 dias");
        break;
    case 5:
        printf("Maio, 31 dias");
        break;
    case 6:
        printf("Junho, 30 dias");
        break;
    case 7:
        printf("Julho, 31 dias");
        break;
    case 8:
        printf("Agosto, 31 dias");
        break;
    case 9:
        printf("Setembro, 30 dias");
        break;
    case 10:
        printf("Outubro, 31 dias");
        break;
    case 11:
        printf("Novembro, 30 dias");
        break;
    case 12:
        printf("Dezembro, 31 dias");
        break;
    default:
        printf("Digite um numero valido");
        break;
    }
}

void piramide_multiplicacao(int numero1) {
    int i, j;
    for (i = 1; i <= numero1; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}

void retangulo(int linhas, int colunas) {
    int i, j;

    printf("+");
    for (i = 0; i < linhas; i++) {
        printf("-");
    }
    printf("+\n");

    for (i = 0; i < colunas; i++) {
        printf("|");
        for (j = 0; j < linhas; j++) {
            printf(" ");
        }
        printf("|\n");
    }

    printf("+");
    for (i = 0; i < linhas; i++) {
        printf("-");
    }
    printf("+\n");
}

float p1_x, p1_y, p2_x, p2_y, p3_x, p3_y, p4_x, p4_y;
float perimetro;

void lerCoordenadas() {
    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &p1_x, &p1_y);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &p2_x, &p2_y);

    printf("Digite as coordenadas do terceiro ponto (x3 y3): ");
    scanf("%f %f", &p3_x, &p3_y);

    printf("Digite as coordenadas do quarto ponto (x4 y4): ");
    scanf("%f %f", &p4_x, &p4_y);
}

void calcularPerimetro() {
    float lado1 = sqrt(pow(p2_x - p1_x, 2) + pow(p2_y - p1_y, 2));
    float lado2 = sqrt(pow(p3_x - p2_x, 2) + pow(p3_y - p2_y, 2));
    perimetro = 2 * (lado1 + lado2);
}

void imprimirPerimetro() {
    printf("\nO perimetro do retangulo eh: %.2f\n", perimetro);
}

void horas(int horario) {
    int hora_hora = horario / 3600;
    int hora_minuto = (horario % 3600) / 60;
    int hora_segundos = horario % 60;
    printf("Convertido: %d:%d:%d\n", hora_hora, hora_minuto, hora_segundos);
}

void piramide(int nmr1){
    printf("\n");

    for (int i = 1; i <= nmr1; i++) {
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = nmr1 - 1; i >= 1; i--) {
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{

// exercicio 1

    int nmr;
    printf("Digite um numero p/ verificar a paridade\n");
    scanf("%d", &nmr);
    par_impar(nmr);

// exercicio 2

int mes;
printf("Digite um numero de 1 a 12: ");
scanf("%d", &mes);
meses(mes);

// exercicio 3

    int numero;
    printf("Digite um numero\n");
    scanf("%d", &numero);
    piramide(numero);

// exercicio 4

int linhas, colunas;

    printf("tamanho das colunas: ");
    scanf("%d", &colunas);
    printf("tamanho das linhas: ");
    scanf("%d", &linhas);
    retangulo(colunas, linhas);

// exercicio 5

    lerCoordenadas();
    calcularPerimetro();
    imprimirPerimetro();

// exercico 6

    int horario;
    printf("Digite um numero em segundos: ");
    scanf("%d", &horario);
    horas(horario);

// exercicio 7

int numero1;
printf("Digite um numero: ");
scanf("%d", &numero1);
piramide_multiplicacao(numero1);


// exercicio 8

int nmr1;    
printf("Digite um numero: \n");
scanf("%d", &nmr1);
piramide(nmr1);

    return 0;
}