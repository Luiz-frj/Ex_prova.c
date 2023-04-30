#include <stdio.h>
float degraus(float alturaD, float alturaU, float c);
int main()
{
    float alturaD, alturaU, c;
    printf("Informe a altura do degrau em metros: ");
    scanf("%f", &alturaD);
    printf("Informe qual altura você deseja chegar: ");
    scanf("%f", &alturaU);
    
    printf("***********************************************\n");
    printf("Cada degrau tem: %.lf metros \n", alturaD);
    printf("Você deseja alcançar a altura: %.lf metros \n", alturaU);
    printf("Para alcançar essa altura, você tera de subir: %.lf degraus \n", degraus(alturaU, alturaD, c));
    printf("***********************************************\n");
   return 0;
}
float degraus(float alturaU, float alturaD, float c)
{
    c = alturaU/alturaD;
    return c;
}
