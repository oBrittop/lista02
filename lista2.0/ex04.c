#include<stdio.h>
int main()
{
    float n1, n2, m;
    printf("Digite sua primeria nota bimestral? \n:");
    scanf("%f", &n1);
        printf("Digite sua segunda nota bimestral? \n:");
    scanf("%f", &n2);


    m = n1 + n2 / 2;







    if (m > 7)
    {
        printf("Parabens voce foi aprovado \n");
    }
    else if (m < 7)
    {
       printf("louser \n");
    }
    else 
    printf("Positivo \n");
    

    return 0;
}
