#include <stdio.h>
float T1(float wats, float preco, float transformacao);
int main()
{
    float wats, preco, transformacao;
    printf("Informe o valor do quilowatt: ");
    scanf("%f", &wats);
    printf("Informe a quantidade de energia gasta em um mês: ");
    scanf("%f", &preco);

    printf("***********************************************\n");
    printf("O preço do quilowatts é de: %.2lf \n", wats );
    printf("Em um mes, você gastou de energia: %.lf \n", preco);
    printf("Sua conta, em reais, será de: R$ %.2lf \n", T1(wats, preco, transformacao));
    printf("***********************************************\n");
   return 0;
}
float T1(float wats, float preco, float transformacao)
{
    transformacao = wats * preco * 0.85;
    return transformacao;
}
