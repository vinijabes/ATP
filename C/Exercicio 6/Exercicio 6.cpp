#include<stdio.h>
#include <stdlib.h>
#include<time.h>

#define Size 30

main()
{
	int maior, menor, n, x, i;
	
	printf("Digite a quantidade de termos da sequencia: ");
	scanf("%d", &n);
	
	if(n > 0){
		i = 1;
		printf("Digite o primeiro termo da sequencia: ");
		scanf("%d", &x);
		maior = x;
		menor = x;
		
		while(i++ < n){
			printf("Digite o proximo termo da sequencia: ");
			scanf("%d", &x);	
			
			if(x > maior) maior = x;
			else if(x < menor) menor = x;
		}
	}
	
	printf("Maior = %d\n", maior);
	printf("Menor = %d\n", menor);
	
	system("pause");
}
