#include<stdio.h>

void comparar(int *pt1, int *pt2) {

    if (*pt1 > *pt2) {
        printf("Conteudo do maior endereco: %d", pt1);}
    else if (*pt2 > *pt1) {
        printf("Conteudo do maior endereco: %d", pt2);}
}

int main() {
    int v1, v2;

     printf("Digite o valor da primeira variavel: ");
     scanf("%d", &v1);
     printf("Digite o valor da segunda variavel: ");
     scanf("%d", &v2);

    int *pt1 = &v1;
    int *pt2 = &v2;

    comparar(pt1, pt2);

    return 0;
}
