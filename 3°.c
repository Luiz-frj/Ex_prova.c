#include <stdio.h>
float calculo ( float diaria, float desconto, float calculoT);
int main()
{
    float Diaria, desconto, calculoT;
    printf("Informe o valor da diaria: ");
    scanf("%f", &Diaria);
    printf("Infome o valor de desconto: ");
    scanf("%f", &desconto);
    printf("***********************************************\n");
    printf("O valor da diaria era de: R$ %.2lf\n",  Diaria);
    printf("O percentual do desconto foi de: %.f\n porncetos", desconto);
    printf("O valor da diaria com o desconto sera de: R$ %.2lf\n %%", calculo(Diaria,desconto,calculoT));
    printf("***********************************************\n");
   return 0;
}
float calculo ( float diaria, float desconto, float calculoT)
{
    calculoT = diaria * (desconto/100);
    return calculoT;
}
