#include <stdio.h>

/*2. Construa um algoritmo que calcule a área de um círculo cujo raio é fornecido pelo
usuário (use área= 3.14 x raio2)*/

int main()
{
    float A, r; 
 
printf("Digite o raio de um circulo que te informo a area: ");
scanf("%f", &r);
    A = 3.14 * (r*r);
if (r > 0)
{
    printf("A area do circulo e %f", A);
}
    else
{        
    printf("Nao existe");
}

return 0;
}
