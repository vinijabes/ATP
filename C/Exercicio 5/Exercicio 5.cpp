#include<stdio.h>
#include <stdlib.h>

main()
{
	int x, n, Resultado;
	
	printf("Digite a base: ");
	scanf("%d", &x);
	printf("Digite o expoente, sendo ele um natural: ");
	scanf("%d", &n);
	
	if(n > 0)
	{
		Resultado = x;
		for(int i = 1; i <n; i++)
		{
			Resultado *= x;
		}
		printf("%d elevado a %d = %d\n", x, n, Resultado);
	}else{
		printf("Entrada invalida");
	}
    system("pause");
}
