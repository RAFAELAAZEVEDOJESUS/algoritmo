#include<stdio.h> 
#include<math.h>
#define PI 3.14159
int main (){
    //calcular a area do circulo -> area = 3.14159 * raio²
    float area, raio;
    printf("Digiteo valor do raio:");
    scanf("%f", &raio);
    area = PI * pow (raio,2); //POW FUNÇÃO MATEMATICA DA BI
    printf("area:%f", area);
}
//fim

