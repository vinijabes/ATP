#include<stdio.h>
#include <stdlib.h>

main()
{
	int n;
	
	printf("Digite um numero pertencente ao conjunto dos naturais: ");
	scanf("%d", &n);
	
	printf("Os %d primeiros numeros naturais impares sao:\n", n);
	for(int i = 0;i < n; i++) printf("%d\n", 1+ i*2);
	
    system("pause");
}
