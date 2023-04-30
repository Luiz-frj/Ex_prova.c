#include <stdio.h>
float porcento(float votos, float eleitores, float p);
int main()
{
    float eleitores, brancos, nulos, validos, p;
    printf("Informe quantas pessoas votaram: ");
    scanf("%f", &eleitores);
    printf("Informe quantos votos brancos: ");
    scanf("%f", &brancos);
    printf("Informe quantos votos nulos: ");
    scanf("%f", &nulos);
    printf("informe quantos votos validos: ");
    scanf("%f", &validos);
    
    printf("***********************************************\n");
    printf("Ao todo, foram: %.lf votos \n", eleitores);
    printf("Brancos: %.lf %%\n", porcento(brancos,eleitores,p));
    printf("Nulos: %.lf %%\n", porcento(nulos,eleitores,p));
    printf("Validos: %.lf %%\n", porcento(validos,eleitores,p));
    printf("***********************************************\n");
   return 0;
}
float porcento(float votos, float eleitores, float p)
{
    p = (votos/eleitores) * 100;
    return p;
}
