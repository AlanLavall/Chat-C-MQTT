#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	
	system("mosquitto_sub -h broker.emqx.io -t pi2a/nomes"); //subscreve no topico pi2a/nomes onde vai mostrar quem ta online
	
}
