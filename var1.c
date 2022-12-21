#include <stdio.h>;
#include <locale.h>;

int main(){
    setlocale(LC_ALL,"Portuguese");

    int v1, v2, r1, r2;

    printf("Digite o valor 1: ");
    scanf("%i",&v1);

    printf("Digite o valor 2: ");
    scanf("%i", &v2);

    r1 = v1 + v2;
    r2 = v1 - v2;

    printf("A soma é: %i\n",r1);
    printf("A subtração é: %i",r2);

}