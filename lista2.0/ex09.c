#include<stdio.h>
int main()
{
    int xhrs ;
    float stotal, s, sp, spx, spxx;
    printf(" Quanto voce receber por mes:");
    scanf("%f", &s);
    sp = (s / 160);

    printf("voce fez quantas horas extras ");
    scanf("%d", &xhrs);

    spx = sp + (sp * 0.5);
    spxx = spx * xhrs;
    stotal = (s + spxx );

    printf("seu salario total e de %3.f", stotal);






    return 0;
}


//. A jornada de trabalho semanal de um funcion´ario ´e de 40 horas. O funcion´ario que trabalhar mais de 40
//horas receber´a hora extra, cujo c´alculo ´e o valor da hora regular com um acr´escimo de 50%. Escreva um
//algoritmo que leia o n´umero de horas trabalhadas em um mˆes, o sal´ario por hora e escreva o sal´ario total do
//funcion´ario, que dever´a ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o mˆes
//possua 4 semanas exatas).
//
