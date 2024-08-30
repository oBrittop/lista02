#include<stdio.h>
int main()
{
    int num, num2;
    printf("Digite um valor :");
    scanf("%d", &num);

       printf("Os valores nao podem ser iguais");
        printf("Digite outro valor :");

    scanf("%d", &num2);

    if (num > num2)
    {
        printf("O maior numero eh %d \n", num);
    }
    else 
    printf("O maior numero eh%d \n",num2);
  

    return 0;
}
