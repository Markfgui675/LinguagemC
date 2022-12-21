#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    
    // int %i
    // float %f

    int v1, v2, soma;
    printf("Digite o valor 1: ");
    scanf("%i",&v1);

    printf("Digite o valor 2: ");
    scanf("%i",&v2);

    soma = v1 + v2;
    printf("A soma é: %i",soma);

}