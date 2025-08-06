#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Autor: Lucas Sassi de Souza
//RA: 25090523
//Lista: Structs

int main(){

// exercicio 1

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

// Exercicio 6

struct aluno{
       char nome [30];
        int matricula, prova1, prova2, prova3;

};
float media1, media2, media3, media4, media5, maior;

struct aluno A[5];
for(int i=0;i<5;i++){
printf("Digite o nome do aluno %d\n", i+1);
fgets(A[i].nome,30,stdin);
fflush(stdin);
}
printf("\n");
for(int i=0;i<5;i++){
printf("Digite o numero de matricula aluno %d\n", i+1);
scanf("%d",&A[i].matricula);
}
for(int i=0;i<5;i++){
printf("Digite as notas das provas do aluno %d\n", i+1);
scanf("%d %d %d",&A[i].prova1, &A[i].prova2, &A[i].prova3);
}

float medias[5];
for(int y=0;y<5;y++){
    medias[y] = (A[y].prova1 + A[y].prova2 + A[y].prova3) / 3;
}
maior = medias[0];
for(int i=1;i<5;i++){
    if(medias[i] > maior){
        maior = medias[i];
    }
}
for(int i=0;i<5;i++){
    if(medias[i] == maior){
        printf("Aluno com a maior media: %s", A[i].nome);
        printf("Suas notas foram %d, %d e %d", A[i].prova1, A[i].prova2, A[i].prova3);
    }
}

// exercicio 7

struct relogio{
    int horas, minutos, segundos;

        };
    struct relogio R[5];
for(int i=0;i<5;i++){
printf("Digite as horas, minutos e segundos do relogio %d\n", i+1);
scanf("%d %d %d",&R[i].horas, &R[i].minutos, &R[i].segundos);
if(R[i].horas > 23 || R[i].horas < 0){
    printf("horas invalida\n");
    i--;
    }
 if(R[i].minutos > 59 || R[i].minutos < 0){
    printf("minutos invalido\n");
    i--;
    }
 if(R[i].segundos > 59 || R[i].segundos < 0){
    printf("segundos invalido\n");
    i--;
    }
}

int maiorh = R[0].horas , maiorm = R[0].minutos, maiors = R[0].segundos;
for(int i=1;i<5;i++){
    if(R[i].horas > maiorh){
        maiorh = R[i].horas;
        maiorm = R[i].minutos;
        maiors = R[i].segundos;
        }else if (R[i].horas == maiorh){
        if(R[i].minutos > maiorm){
            maiorh = R[i].horas;
            maiorm = R[i].minutos;
            maiors = R[i].segundos;
               }else if (R[i].minutos == maiorm){
                if(R[i].segundos > maiors){
                    maiorh = R[i].horas;
                    maiorm = R[i].minutos;
                    maiors = R[i].segundos;
                }
                }
        }
}
for(int i=0;i<5;i++){
    if (maiorh = R[i].horas && maiorm == R[i].minutos && maiors == R[i].segundos){
        printf("O maior horario e %d horas %d minutos e %d segundos",R[i].horas, R[i].minutos, R[i].segundos);
    }
}

return 0;

}
