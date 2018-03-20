#include<stdio.h>
#include <stdlib.h>

main()
{
	int temp, n, soma;
	float media;
	
	printf("Digite a quantidade de temperaturas a serem inseridas: ");
	scanf("%d", &n);
	
	int i = n;
	while(i--){
		printf("Digite uma temperatura: ");
		scanf("%d", &temp);
		soma += temp;
	}
	
	media = soma/n;
	
	printf("%.2f\n", media);
	
    system("pause");
}
