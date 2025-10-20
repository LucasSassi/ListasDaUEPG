#include <stdlib.h>
#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("exemplo1.bin", "wb");

    if (fp == NULL) { printf("Erro ao abrir o arquivo.\n"); }

        fclose(fp);
        // system("pause");

        return 0;
    }