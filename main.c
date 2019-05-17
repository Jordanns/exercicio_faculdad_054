/* 54) Criar um algoritmo que imprima a soma dos n?meros pares entre 25 e 199. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"portuguese");

    int inicio = 25;
    int soma;

    while(inicio > 24 && inicio < 200){
        if (inicio % 2 == 0) {
            soma = inicio + inicio;
            printf("%d\n", soma);
        }
        inicio++;
    }
    system("pause");
    return 0;
}