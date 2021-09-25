/*Le tudo que foi postado e compara com "????"" caso seja igual ununcia que está online*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
   char linha[100];
   int compara;

   while (1){
	
   	scanf ("%[^\n]", linha);
   	setbuf(stdin, NULL);
   	compara = strcmp (linha, "????");

   	if (compara == 0)
	{
       	system("mosquitto_pub -h broker.emqx.io -t pi2a/nomes -m 'Alan:'");
	}
   }
   return EXIT_SUCCESS;
}
