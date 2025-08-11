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

// exercicio 3

typedef struct atletas {
    char nome[50];
    int idade;
    float altura;
} atletas;

atletas p[5];
int i, j;
    
for (i = 0; i < 5; i++) {
    printf("--- Atleta %d ---\n", i + 1);
    printf("Digite o nome: ");
    fgets(p[i].nome, 50, stdin);
    p[i].nome[strcspn(p[i].nome, "\n")] = 0;
        
    printf("Digite a idade: ");
    scanf("%d", &p[i].idade);
        
    printf("Digite a altura: ");
    scanf("%f", &p[i].altura);
        
    getchar();
}
    
for (i = 0; i < 4; i++) {
    for (j = 0; j < 4 - i; j++) {
        if (p[j].idade < p[j + 1].idade) {
            atletas temp = p[j];
            p[j] = p[j + 1];
            p[j + 1] = temp;
        }
    }
}
    
printf("\n--- Atletas ordenados por idade (mais velho para o mais novo) ---\n");
for (i = 0; i < 5; i++) {
    printf("Atleta: %s\n", p[i].nome);
    printf("Idade: %d anos\n", p[i].idade);
    printf("Altura: %.2f m\n", p[i].altura);
    printf("----------------------------------------\n");
}

// exercicio 4

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

Data data1, data2;
    
printf("Digite a primeira data (DD MM AAAA): ");
scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);
    
printf("Digite a segunda data (DD MM AAAA): ");
scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);
    
int dias1 = data1.ano * 360 + data1.mes * 30 + data1.dia;
int dias2 = data2.ano * 360 + data2.mes * 30 + data2.dia;
    
int diferenca = abs(dias2 - dias1);
    
printf("\nO numero de dias entre as duas datas e: %ld\n", diferenca);

// exercicio 6

typedef struct {
    int codigo;
    char titulo[100];
    char autor[100];
    char area[50];
    int ano;
    char editora[100];
} Livro;

Livro livros[20];
int total_livros = 0;
int opcao;

do {
    printf("--- Menu ---\n");
    printf("1. Cadastrar um livro\n");
    printf("2. Imprimir todos os livros\n");
    printf("3. Pesquisar livro por codigo\n");
    printf("4. Ordenar livros por ano\n");
    printf("5. Sair do programa\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    getchar();
    
    switch(opcao) {
        case 1:
            if (total_livros < 20) {
                printf("--- Cadastro de Livro %d ---\n", total_livros + 1);
                printf("Codigo: ");
                scanf("%d", &livros[total_livros].codigo);
                getchar();
                
                printf("Titulo: ");
                fgets(livros[total_livros].titulo, 100, stdin);
                livros[total_livros].titulo[strcspn(livros[total_livros].titulo, "\n")] = 0;
                
                printf("Autor: ");
                fgets(livros[total_livros].autor, 100, stdin);
                livros[total_livros].autor[strcspn(livros[total_livros].autor, "\n")] = 0;
                
                printf("Area: ");
                fgets(livros[total_livros].area, 50, stdin);
                livros[total_livros].area[strcspn(livros[total_livros].area, "\n")] = 0;
                
                printf("Ano: ");
                scanf("%d", &livros[total_livros].ano);
                getchar();
                
                printf("Editora: ");
                fgets(livros[total_livros].editora, 100, stdin);
                livros[total_livros].editora[strcspn(livros[total_livros].editora, "\n")] = 0;
                
                total_livros++;
                printf("\nLivro cadastrado com sucesso!\n\n");
            } else {
                printf("\nO limite de 20 livros ja foi atingido.\n\n");
            }
            break;
        case 2:
            if (total_livros == 0) {
                printf("\nNenhum livro cadastrado.\n\n");
                break;
            }
            
            printf("--- Livros Cadastrados ---\n");
            for (int i = 0; i < total_livros; i++) {
                printf("Codigo: %d\n", livros[i].codigo);
                printf("Titulo: %s\n", livros[i].titulo);
                printf("Autor: %s\n", livros[i].autor);
                printf("Area: %s\n", livros[i].area);
                printf("Ano: %d\n", livros[i].ano);
                printf("Editora: %s\n", livros[i].editora);
                printf("--------------------------\n");
            }
            printf("\n");
            break;
        case 3: {
            if (total_livros == 0) {
                printf("\nNenhum livro cadastrado.\n\n");
                break;
            }
            
            int codigo_busca;
            printf("Digite o codigo do livro para pesquisa: ");
            scanf("%d", &codigo_busca);
            getchar();
            
            int encontrado = 0;
            for (int i = 0; i < total_livros; i++) {
                if (livros[i].codigo == codigo_busca) {
                    printf("\n--- Livro Encontrado ---\n");
                    printf("Codigo: %d\n", livros[i].codigo);
                    printf("Titulo: %s\n", livros[i].titulo);
                    printf("Autor: %s\n", livros[i].autor);
                    printf("Area: %s\n", livros[i].area);
                    printf("Ano: %d\n", livros[i].ano);
                    printf("Editora: %s\n", livros[i].editora);
                    printf("------------------------\n\n");
                    encontrado = 1;
                    break;
                }
            }
            
            if (!encontrado) {
                printf("\nLivro com codigo %d nao encontrado.\n\n", codigo_busca);
            }
            break;
        }
        case 4: {
            if (total_livros == 0) {
                printf("\nNenhum livro cadastrado para ordenar.\n\n");
                break;
            }
            
            Livro temp;
            for (int i = 0; i < total_livros - 1; i++) {
                for (int j = 0; j < total_livros - i - 1; j++) {
                    if (livros[j].ano > livros[j + 1].ano) {
                        temp = livros[j];
                        livros[j] = livros[j + 1];
                        livros[j + 1] = temp;
                    }
                }
            }
            printf("\nLivros ordenados por ano com sucesso.\n\n");
            break;
        }
        case 5:
            printf("\nSaindo do programa. Ate mais!\n");
            break;
        default:
            printf("\nOpcao invalida. Tente novamente.\n\n");
    }
} while (opcao != 5);
*/

    return 0;
}