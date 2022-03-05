#include <stdio.h>
#include <locale.h>
main(){
	/* Sinal sonoro */
	setlocale(LC_ALL, "portuguese-brazilian");
	
	
	printf("Esse é um sinal sonoro\7\n");
	printf("Esse é o mesmo sinal sonoro \a, mudando somente o caractere\n");
}
