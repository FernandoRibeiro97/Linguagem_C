#include <stdio.h>
#include <locale.h> /*inclui a biblioteca locale*/

main(){
	setlocale(LC_ALL, "portuguese-brazilian"); /*Definindo UTF-8*/
	
	printf("Utilizando aspas dentro de uma string\n");
	printf("O sol está \"LINDO\" hoje!\n");
	printf("\7"); /*Utiliza o comando para gerar um som*/
}
