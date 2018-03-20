#include<stdio.h>
#include <stdlib.h>

main()
{
	int n, SomaPares = 0, SomaImpares = 0, QuantidadePares = 0, QuantidadeImpares = 0;
	
	printf("Digite a quantidade de termos da sequencia: ");
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++ )
	{
		if(i%2 == 0)
		{
			SomaPares += i;
			QuantidadePares++;
		}
		else
		{
			SomaImpares += i;
			QuantidadeImpares++;
		}
	}
	
	printf("A soma dos %d numeros pares equivale a %d\n", QuantidadePares, SomaPares);
	printf("A soma dos %d numeros impares equivale a %d\n", QuantidadeImpares, SomaImpares);
	
	system("pause");
}
