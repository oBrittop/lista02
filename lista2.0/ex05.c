#include<stdio.h>
int main()
{
    int mes, ano, apto;
    printf("Digite o ano em que voce nasceu :");
    scanf("%d", &ano);
        printf("Digite o mes em que voce nasceu considere janeiro como = 1, fevereiro como 2 e assim por diante \n :");
    scanf("%d", &mes);


apto = 2024 - ano;


    if  (apto > 18 || ( mes < 8 && apto == 18 ))
    {
        printf("Voce estar apto para votar!! \n");
    }

    else printf("sai daqui pentelho");
    
   

    return 0;
}
