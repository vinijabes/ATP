#include<stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
	int i, primo = 1, raiz;
	int p;
	
	printf("Digite um numero inteiro maior que um para verificar sua primalidade: ");
	scanf("%d", &p);
	
	raiz = (int) sqrt(p)+1;
	if(p%2 == 0) primo = 0;
	if(p == 2) primo = 1;
	if(p>1){
		for (i = 3; i <= raiz; i = i+2) 
			if ( p%i == 0) { primo = 0; break; }
	}
	else primo = 0;
	if(primo) printf("%d e primo\n", p);
	else printf("%d nao e primo\n", p);
	
	
	
    system("pause");
}
