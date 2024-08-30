#include<stdio.h>
int main()
{
    float altura, m, f, s;
    printf("Qual seu sexo?:Digite 0 para Masculino e 1 para feminino:");
    scanf("%f", &s);
    printf("Digite sua altura :");
    scanf("%f", &altura);

    m = (72.7 * altura) - 58;
    f = (62.1 * altura) - 44.7;



    if ( s == 0)
    {
        printf("Para sexo masculino: peso ideal = (72, 7 × altura) − 58 que e igual a : %2.f\n", m);
    }
    else if (s == 1)
    {
       printf("Para sexo feminino: peso ideal = (62, 1 × altura) − 44, 7 que e igaul a : %2.f \n", f);
    }
    

    return 0;
}
