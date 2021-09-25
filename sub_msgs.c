#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//subscreve no topico pi2a/msgs onde vao chegar as mensagens e filtra para que só as mensagens que começam com por exemplo "Alan:" sejam exibidas
	system("mosquitto_sub -h broker.emqx.io -t pi2a/msgs | grep Alan:");
	return 0;
}
