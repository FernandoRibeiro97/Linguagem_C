#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	
	printf("O tamanho em bytes de um char é: %d\n",sizeof(char));
	printf("O tamanho em bytes de um int é: %d\n",sizeof(int));
	printf("O tamanho em bytes de um float é: %d\n", sizeof(float));
	printf("O tamanho em bytes de um double é: %d\n",sizeof(double));
}
