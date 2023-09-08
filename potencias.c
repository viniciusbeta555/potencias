#include <stdio.h>
#include <math.h>

int main(){
    int num;
    float quadrado, cubo, raizQuad, raizCub, resto;

    printf("Digite um numero positivo para ser calculado!\n");
    scanf("%d", &num);

    if (num > 0){
        quadrado = pow(num, 2);
        cubo = pow(num, 3);
        raizQuad = sqrt(num);
        raizCub = cbrt(num);
        resto = num%3;

        printf("O quadrado do numero é: %.2f\n", quadrado);
        printf("O cubo do numero é: %.2f\n", cubo);
        printf("A raiz quadrada do numero é: %.2f\n", raizQuad);
        printf("A raiz cubica do numero é: %.2f\n", raizCub);
        printf("O resto do numero é: %.2f\n", resto);
    }else{
        printf("Numero invalido!");
    }
    
return 0;
}