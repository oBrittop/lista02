questao 8 
#include <stdio.h>

int main()
{
float valor, atualizacao;
int mvenda;

printf("insira o valor do produto: ");
scanf("%f", &valor);

printf("insira o valor da venda mensal media do produto: ");
scanf("%d", &mvenda);

atualizacao=valor;



if(mvenda < 500)
{
 if(valor<30)
  {atualizacao=1.10*valor;}
}



if(mvenda >= 500 && mvenda <1.200)
{
 if(valor>=30 && valor<80)
  {atualizacao=1.15*valor;}
}




if(mvenda >= 1.200)
{
 if(valor>=80)
  {atualizacao=(0.20*valor-valor);}
}

printf("o novo valor do produto eh: %.2f\n", atualizacao);

}
