#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1;
	int a = 1, b = 0, c; 
	
	printf("Quantos termos quer ver: ");
	scanf("%d", &n1);
	
	printf("\n0 ");
	n1--;
	
	while (n1) {
		printf("%d ", a);
		c = a;
		a += b;
		b = c;
		n1--;
	}	  
}