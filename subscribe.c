#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	
	system("mosquitto_sub -h broker.emqx.io -t pi2a/msgs | grep Alan:"); //subscreve no topico pi2a/msgs onde vão chegar as mensagens
	return 0;
}
