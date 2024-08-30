#include<stdio.h>
int main()
{
    int num, num2;
    printf("Digite um valor :");
    scanf("%d", &num);

       printf("Os valores nao podem ser iguais");
        printf("Digite outro valor :");

    scanf("%d", &num2);

    if (num < num2)
    {
        printf(" a ordem cresente dos numeros eh %d %d\n", num2, num);
    }
    else 
    printf("A ordem cresente dos numeros eh %d %d \n",num , num2);
  

    return 0;
}
