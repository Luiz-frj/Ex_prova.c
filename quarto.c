#include <stdio.h>
float calculoP (float compra, float parcela);
int main()
{
    float compra, parcela;
    printf("Informe o valor da compra: ");
    scanf("%f", &compra);
    printf("***********************************************\n");
    printf("O valor da compra é de: R$ %.2lf\n", compra);
    printf("O valor da compra com as prestações sera de: R$ %.2lf\n",  calculoP(compra, parcela));
    printf("***********************************************\n");
   return 0;
}
float calculoP(float compra, float parcela)
{
    parcela = compra/5;
    return parcela;
}
