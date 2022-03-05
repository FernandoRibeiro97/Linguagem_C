#include <stdio.h>
#include <locale.h>

main (){
	setlocale(LC_ALL, "portuguese-brazilian");
	
	int num=123;
	printf("O valor de num = %d e o valor seguinte = %d\n",num,num+1); /* O formato de escrita de um inteiro na função printf é %d. */
}
