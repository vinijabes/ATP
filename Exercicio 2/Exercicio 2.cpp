#include<stdio.h>
#include <stdlib.h>

main()
{
	int n, aux, Soma = 0;
	
	printf("Digite um numero pertencente ao conjunto dos naturais: ");
	scanf("%d", &n);
	aux = n;
	
	for(;n >= 0; n--)
    Soma += n;
    
    printf("A soma dos inteiros contidos no intervalo [0, %d] = %d\n", aux, Soma);
    
    system("pause");
}
