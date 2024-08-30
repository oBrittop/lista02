#include<stdio.h>
int main()
{
    float saldo_atual, saldo, debito, credito;
    printf("Digite seu saldo :");
    scanf("%f", &saldo);

    printf("Digite seu debito :");
    scanf("%f", &debito);

    printf("Digite seu credito :");
    scanf("%f", &credito);


    saldo_atual = saldo - debito + credito ;


    if (saldo_atual  >= 0 )
    {
        printf("Seu saldo e %.2f i ele e positivo \n",saldo_atual);
    }
    else
    {
       printf("Seu saldo e %.2f i ele e negativo \n",saldo_atual );
    }
    

    return 0;
}
