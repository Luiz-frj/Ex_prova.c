#include <stdio.h>
float transformacao(float dolars, float reais);
int main()
{
    float Codia,CoD;
    printf("Informe a quantidade de Dolares no cofre: ");
    scanf("%f", &CoD);
    printf("Informe a cotação atual: ");
    scanf("%f", &Codia);

    printf("***********************************************\n");
    printf("Você possue: %.2lf Dolares\n", CoD);
    printf("A cotação atual é de: R$ %.2lf\n", Codia);
    printf("O valor em reais sera de: R$ %.2lf\n", transformacao(Codia,CoD));
    printf("***********************************************\n");
   return 0;
}
float transformacao(float CoD, float Codia)
{
    CoD * Codia;
    return CoD;
}
