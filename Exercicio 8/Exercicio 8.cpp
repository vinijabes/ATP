#include<stdio.h>
#include <stdlib.h>

main()
{
	int n, fatorial;
	
	printf("Digite um numero do qual deseja calcular o fatorial: ");
	scanf("%d", &n);
	
	fatorial = n;
	for(int i = 1; i < n; i++)
	{
		fatorial *=(n-i);
	}
	
	printf("O fatorial de %d equivale a %d\n", n, fatorial);
	
    system("pause");
}
