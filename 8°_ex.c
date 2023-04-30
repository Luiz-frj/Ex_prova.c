#include <stdio.h>
float F1(float peso, float pesoI);
float P (float peso, float pesoE);
int main()
{
    float peso, pesoI, pesoE;
    printf("Informe o seu peso atual: ");
    scanf("%f", &peso);

    printf("***********************************************\n");
    printf("O peso é de: %.2lf \n", peso );
    printf("Se você engordar 15%%, seu peso será de: %.2lf \n", F1(peso, pesoI));
    printf("Caso emagreça 20%%, seu peso será de: %.2lf \n", P(peso, pesoE));
    printf("***********************************************\n");
   return 0;
}
float F1(float peso, float pesoI)
{
    pesoI = peso * 1.15;
    return pesoI;
}
float P (float peso, float pesoE)
{
    pesoE = peso * 0.8;
    return pesoE;
}
