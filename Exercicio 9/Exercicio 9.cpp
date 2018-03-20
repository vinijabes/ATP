#include<stdio.h>
#include <stdlib.h>

main()
{
	int n = 6,i = 3, j = 2, NumerosMultiplos = 0;
	
	printf("Insira o valor de N: ");
	scanf("%d", &n);
	
	printf("Insira o valor de i: ");
	scanf("%d", &i);
	
	printf("Insira o valor de j: ");
	scanf("%d", &j);
	
	for(int Num = 0; NumerosMultiplos < n; Num++)
	{
		if(Num%i == 0)
		{
			printf("%d, ", Num);
			NumerosMultiplos++;
		}
		else if(Num%j == 0)
		{
			printf("%d, ", Num);
			NumerosMultiplos++;
		}
	}
	
	
    system("pause");
}
