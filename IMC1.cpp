
#include<stdio.h>
#include<stdlib.h>

int main(void)

{
    float peso, altura, imc;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    imc= peso/(altura*altura);

    if(imc<18.4)
    {
        printf("Abaixo do peso ");
    }
    else if(imc>=18.5 && imc<=24.9)
    {
        printf("Peso normal");
    }
    else if(imc>=25 && imc<=29.9)
    {
        printf("Sobre peso");
    }
    else if(imc>=30 && imc<=39.9)
    {
        printf("Obsidade");
    }
    else
    {
        printf("Obsidade grave !!!");
    }
    return 0;
}