#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Autor: Lucas Sassi de Souza
//RA: 25090523
//Lista: Structs
int main() {
// exercicio 1

typedef struct pessoa {
    char nome [80];
    int idade;
    char endereco [80];
}pessoa;
pessoa p;

printf("insira o nome: ");
fgets(p.nome, 80, stdin);
fflush(stdin);

printf("insira a idade: ");
scanf("%d", &p.idade);
fflush(stdin);

printf("insira o endereco: ");
fgets(p.endereco, 80, stdin);
printf("\n");

printf("%s: %d, %s", p.nome, p.idade, p.endereco);


// exercio 2

float distancia = 0;
typedef struct pontos {
    float x;
    float y;
}pontos;

pontos d;

printf("insira o x: ");
scanf("%f", &d.x);
printf("insira o y: ");
scanf("%f", &d.y);

distancia = sqrt(d.x*d.x+d.y*d.y);
printf("%2.f", distancia);


// exercicio 3

float distancia = 0;
typedef struct pontos {
    float x;
    float y;
}pontos;

pontos d, k;

printf("insira o x1: ");
scanf("%f", &d.x);
printf("insira o y1: ");
scanf("%f", &d.y);
printf("insira o x2: ");
scanf("%f", &k.x);
printf("insira o y2: ");
scanf("%f", &k.y);

int distretx = (d.x - k.x);
int distrety = (d.y - k.y);

distancia = sqrt(distretx*distretx+distrety*distrety);
printf("%2.f", distancia);


// exercicio 4

float distancia = 0;
typedef struct retangulo {
    float x;
    float y;
}pontos;

pontos d, k;

printf("insira o x do canto superior esquerdo: ");
scanf("%f", &d.x);
printf("insira o y do canto superior esquerdo: ");
scanf("%f", &d.y);
printf("insira o x do canto inferiior direito: ");
scanf("%f", &k.x);
printf("insira o y do canto inferiior direito: ");
scanf("%f", &k.y);

float distretx = (d.x - k.x);
float distrety = (d.y - k.y);

float diagonal = sqrt(distretx*distretx+distrety*distrety);
printf("diagonal: %2.f\n", diagonal);
float perimetro = distretx + distretx + distrety + distrety ;
printf("Perimetro: %2.f\n", perimetro);
float area = distretx * distrety;
printf("Area: %2.f\n", area);


// exercicio 5

float distancia = 0;
typedef struct retangulo {
    float x;
    float y;
}pontos;

pontos d, k, g;

printf("insira o x do canto superior esquerdo: ");
scanf("%f", &d.x);
printf("insira o y do canto superior esquerdo: ");
scanf("%f", &d.y);
printf("insira o x do canto inferior direito: ");
scanf("%f", &k.x);
printf("insira o y do canto inferiior direito: ");
scanf("%f", &k.y);
printf("insira o x do ponto desejado: ");
scanf("%f", &g.x);
printf("insira o y do ponto desejado: ");
scanf("%f", &g.y);

float distretx = (d.x - k.x);
float distrety = (d.y - k.y);

if (g.x < k.x && g.x > d.x && g.y < d.y && g.y > k.y) {
    printf("\nO ponto esta contido no retangulo");
}else {
    printf("\nO ponto NAO esta contido no retangulo");
}

// exercicio 6

return 0;

}