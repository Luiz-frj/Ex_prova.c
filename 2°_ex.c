#include <stdio.h>
   int calculo(int espetaculo, float precocnv, int calculoqnt);
int main()
{
    float precocnv;
    int espetaculo, calculoqnt;   
    printf("informe o preço do espetaculo e quanto cada convite sera vendido: \n");
    scanf("%d%f", &espetaculo, &precocnv);

    printf("***********************************************\n");
    printf("- O preço do espetaculo foi: %d\n", espetaculo);
    printf("- Cada convite foi vendido à: %.2f\n", precocnv);
    printf("- Para ter lucro, é preciso render mais de: %d convites\n", calculo(espetaculo,precocnv,calculoqnt));
    printf("***********************************************\n");
   return 0;
}
int calculo(int espetaculo, float precocnv, int calculoqnt)
{
    calculoqnt = espetaculo / precocnv; 
    return calculoqnt;
}
