#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese-brazilian");
	
	int n;
	
	printf("Digite um n�mero: ");
	scanf("%d",&n);
	printf("O valor digitado foi %d\n", n);
}
