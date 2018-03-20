#include<stdio.h>
#include <stdlib.h>

main()
{
	int n;
	
	printf("Digite um numero pertencente ao conjunto dos naturais: ");
	scanf("%d", &n);
	
	for(;n >= 0; n--)printf("%d*%d = %d\n",n, n, n*n);
    
    system("pause");
}
