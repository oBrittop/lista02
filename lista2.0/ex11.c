#include<stdio.h>
int main()
{
    float salario, c3, c5, vdv, s3, s5;
    printf("Quanto voce recebe? :");
    scanf("%f", &salario);
    printf("Qual foi o total em reais das vendas?");
    scanf("%f", &vdv );
    c3 = vdv * 0.03 ;
    c5 = vdv * 0.05;
    
    s3 = salario + c3;
    s5 = salario + c5;


    if (vdv >=1.500)
    {
        printf("Seu salario eh : %.2f\n", s5);
        
    }
    else 
    {
       printf("Seu salario eh :  %.2f\n",s3);

    }
    

    return 0;
    
}

//Ler o sal´ario fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe
//uma comiss˜ao de 3% sobre o total das vendas at´e R$1.500, 00 mais 5% sobre o que ultrapassar este valor,
//calcular e escrever o seu sal´ario total.
