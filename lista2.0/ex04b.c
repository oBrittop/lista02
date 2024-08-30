#include<stdio.h>
int main()
{
    float n1, n2, m;
    printf("Digite sua primeria nota bimestral? \n:");
    scanf("%f", &n1);
        printf("Digite sua segunda nota bimestral? \n:");
    scanf("%f", &n2);


    m = (n1 + n2 / 2);







    if (m > 7)
    {
        printf("Parabens voce foi aprovado, e sua media e %2.f \n", m);
    }
    else if (m < 7)
    {
       printf("louser \n");
       printf("sua media == %2.f \n",m );
    }
    else {printf("Positivo \n");}


    

    

    return 0;
}