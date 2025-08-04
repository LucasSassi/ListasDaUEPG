#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Autor: Lucas Sassi de Souza
//RA: 25090523
//Lista: Structs

int main(){

// exercicio 1
/*
typedef struct pessoa {
    char nome [80];
    int idade;
    char endereco [80];
}pessoa;
pessoa p;

printf("insira o nome: ");
fgets(p.nome, 80, stdin);
p.nome[strcspn(p.nome, "\n")] = 0;

printf("insira a idade: ");
scanf("%d", &p.idade);
while(getchar() != '\n'); 

printf("insira o endereco: ");
fgets(p.endereco, 80, stdin);
p.endereco[strcspn(p.endereco, "\n")] = 0;

printf("\n");
printf("%s: %d, %s\n", p.nome, p.idade, p.endereco);

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
printf("%2.f\n", distancia);

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
if (d.x == 0){
    distretx = k.x;
}
float distrety = (d.y - k.y);
if (d.y == 0){
    distrety = k.y;
}

float diagonal = sqrt(distretx*distretx+distrety*distrety);
printf("diagonal: %2.f\n", diagonal);
float perimetro = distretx + distretx + distrety + distrety ;
if (perimetro < 0){
    perimetro = perimetro * -1;
}
printf("Perimetro: %2.f\n", perimetro);
float area = distretx * distrety;
if (area < 0){
    area = area * -1;
}
printf("Area: %2.f\n", area);

// exercicio 5

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
if (d.x == 0){
    distretx = k.x;
}

float distrety = (d.y - k.y);
if (d.y == 0){
    distrety = k.y;
}

if (g.x < k.x && g.x > d.x && g.y < d.y && g.y > k.y) {
    printf("\nO ponto esta contido no retangulo");
}else {
    printf("\nO ponto NAO esta contido no retangulo");
}

// exercicio 6

typedef struct alunos {
    char nome[30];
    int NMRmatricula;
    int p1, p2, p3;
} alunos;

alunos A[5];

for (int i = 0; i < 5; i++) {
    printf("Escreva o nome do aluno %d: ", i + 1);
    fgets(A[i].nome, 30, stdin);
}
printf("\n");
for (int i = 0; i < 5; i++) {
    printf("Numero de matricula do aluno %d: ", i + 1);
    scanf("%d", &A[i].NMRmatricula);

    printf("Nota da primeira prova do aluno %d: ", i + 1);
    scanf("%d", &A[i].p1);

    printf("Nota da segunda prova do aluno %d: ", i + 1);
    scanf("%d", &A[i].p2);

    printf("Nota da terceira prova do aluno %d: ", i + 1);
    scanf("%d", &A[i].p3);
}

int medias[5];
for (int u = 0; u < 5; u++) {
    medias[u] = (A[u].p1 + A[u].p2 + A[u].p3) / 3;
}

int maior = medias[0];
for (int i = 1; i < 5; i++) {
    if (medias[i] > maior) {
        maior = medias[i];
    }
}
printf("\n");
printf("Maior media: %d\n", maior);
*/
// exercicio 7

struct Hora {
    int hora;
    int minuto;
    int segundo;
};

struct Hora horas[5];
struct Hora maiorHora;

printf("Digite cinco horas (HH MM SS):\n");

for (int i = 0; i < 5; i++) {
    printf("Hora %d:\n", i + 1);
    printf("Hora (0-23): ");
    scanf("%d", &horas[i].hora);
    printf("Minuto (0-59): ");
    scanf("%d", &horas[i].minuto);
    printf("Segundo (0-59): ");
    scanf("%d", &horas[i].segundo);

    if (horas[i].hora < 0 || horas[i].hora > 23 ||
        horas[i].minuto < 0 || horas[i].minuto > 59 ||
        horas[i].segundo < 0 || horas[i].segundo > 59) {
        printf("Valores inválidos para a hora. Por favor, digite novamente.\n");
        i--;
    }
}

maiorHora = horas[0];

for (int i = 1; i < 5; i++) {
   if (horas[i].hora > maiorHora.hora) {
       maiorHora = horas[i];
    } else if (horas[i].hora == maiorHora.hora) {
        if (horas[i].minuto > maiorHora.minuto) {
            maiorHora = horas[i];
        } else if (horas[i].minuto == maiorHora.minuto) {
            if (horas[i].segundo > maiorHora.segundo) {
                maiorHora = horas[i];
            }
        }
    }
}
printf("A maior hora digitada é: %02d:%02d:%02d\n", maiorHora.hora, maiorHora.minuto, maiorHora.segundo);


return 0;

}
