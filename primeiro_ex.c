#include <stdio.h>
   double calcularR( double pesoR, double racaoG1, double racaoG2);
int main() 
{
   
   double pesoR, racaoG1, racaoG2;

    printf("informe o peso da ração em kilos: \n");
    scanf("%lf", &pesoR);
    printf("informe a quantidade de ração para um dos gato: \n");
    scanf("%lf", &racaoG1);
    printf("informe a quantidade de ração para o outr gato: \n");
    scanf("%lf", &racaoG2);

    printf("***********************************************\n");
    printf("Resultado: \n");
    printf("- Peso Inicial: %.2lf\n", pesoR);
    printf("- quantas gramas o primeiro gato recebeu: %.2lf\n", racaoG1);
    printf("- quantas gramas o outro gato recebeu: %.2lf\n", racaoG2);
    printf("- restante da ração depois de 5 dias: %.2lf kilos\n", calcularR (pesoR,racaoG1,racaoG2)/1000);
    printf("***********************************************\n");
   return 0;
}

double calcularR(double pesoR, double racaoG1, double racaoG2)
{
 double racaoR = pesoR * 1000 - (racaoG1 + racaoG2) * 5;
return racaoR;
}
