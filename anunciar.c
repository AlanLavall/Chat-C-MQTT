#include<stdio.h>
#include<stdlib.h>

int main()
{   
    
    system("mosquitto_sub -h broker.emqx.io -t pi2a/comandos | ./filtro"); //posta esse comando no terminal
}
