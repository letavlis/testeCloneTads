#include <stdlib.h>
#include <stdio.h>

int main(){
	int a;

	printf("-Digite um número inteiro: ");
	scanf("%d", &a);
	
	if (a % 2 == 0) printf("\nEste é um número par\n");
	else printf("\nEste não é um numero par\n");

    return 0;
}
