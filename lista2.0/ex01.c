#include<stdio.h>
int main()
{
    int num;
    printf("Digite um valor :");
    scanf("%d", &num);

    if (num > 10)
    {
        printf("Seu numero e maior que 10 \n");
    }
    else if (num < 10)
    {
       printf("Seu numero e menor que 10 \n");
    }
    

    return 0;
}
