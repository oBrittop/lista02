#include<stdio.h>
int main()
{
    float num;
    printf("Digite um valor :");
    scanf("%f", &num);

    if (num > 0)
    {
        printf("Seu numero e Positivo \n");
    }
    else if (num < 0)
    {
       printf("Seu numero e Negativo \n");
    }
    else 
    printf("Positivo \n");
    

    return 0;
}
