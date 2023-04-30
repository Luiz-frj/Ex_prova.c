#include <stdio.h>
float calculo(float salario, float conta1, float conta2, float r);
int main()
{
    float salario, conta1, conta2, r;
    printf("Informe o seu salario: ");
    scanf("%f", &salario);
    printf("Informe o valor da conta: ");
    scanf("%f", &conta1);
    printf("Informe o valor da outra conta: ");
    scanf("%f", &conta2);
    
    printf("***********************************************\n");
    printf("Seu salario era de: R$%.2lf \n", salario);
    printf("O valor da conta é de: R$%.2lf \n", conta1);
    printf("O valor da outra conta é de: R$%.2lf \n", conta2);
    printf("Do seu salario, ira sobrar: R$%.2lf \n", calculo(salario, conta1, conta2, r));
    printf("***********************************************\n");
   return 0;
}
float calculo(float salario, float conta1, float conta2, float r)
{
    r = salario - ((conta1 * 1.02) + (conta2 * 1.02));
    return r;
}
