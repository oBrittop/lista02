#include<stdio.h>
int main()
{
    float maca, num;
    int  qnt = 0;

    printf("Quantas maca vc quer senhor(a) :");
    scanf("%d", &qnt);

    if (qnt < 12)//maça custa 1.3$
    {
        maca = 1.3;
    }else if (qnt >= 12)//maça custa 1$
    {
       maca = 1;
    }
    else { printf("ERRO, FAZ DNV!!! \n");
    }

    num = (maca * qnt);

    printf("Sua compra deu %.2f \n",num);
    

    return 0;
}
