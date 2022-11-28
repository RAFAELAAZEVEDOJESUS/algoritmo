#include <stdio.h>

/*5. Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a
quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o
construtor tem a quantidade total de fios em metros a serem utilizados na instalação
elétrica da obra e que cada rolo de fio tem 50 metros.*/

int main(){

int rolos, fios, metros;
    printf("Quantos metros serao necessarios?: ");
        scanf("%f", &metros);
if(metros > 0)
{
rolos = metros / 50;
fios = metros % 50;
    printf("serao utilizados %f rolos e %f fios avulsos", rolos, fios );
}
else
{
   printf("quantidade invalida de metros");
}

return 0;
}

