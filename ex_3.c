#include <stdio.h>
int calculo ( int diaria, int desconto, double calculoT);
int main()
{
    double Diaria, calculoT;
    int desconto;
    printf("Informe o valor da diaria: ");
    scanf("%d", &Diaria);
    printf("Infome o valor de desconto: ");
    scanf("%f", &desconto);
    printf("***********************************************\n");
    printf("O valor da diaria era de: R$ %.2lf\n",  Diaria);
    printf("O percentual do desconto foi de: %f\n", desconto);
    printf("O valor da diaria com o desconto sera de: R$ %.2lf\n", calculo(Diaria,desconto,calculoT));
    printf("***********************************************\n");
   return 0;
}
int calculo ( int diaria, int desconto, double calculoT)
{
    calculoT = diaria * (desconto/100);
    return calculoT;
}
