#include <stdio.h>
#include <stdlib.h>

int main (void) {
    char linha[100], comando[256];
    int compara, escolha;
    
    printf("\t\t*****Bem vindo ao chat********");
    do
    {
        printf("\n\nMenu:\n1- Verificar onlines\n2- Enviar Mensagem\n3- Sair\nEscolha: "); // menu
        scanf("%i", &escolha);
        switch(escolha)
        {
            case 1: // caso a escolha seja 1
                system("mosquitto_pub -h broker.emqx.io -t pi2a/comandos -m '????'"); //  publica "????"" no tópico  pi2a/comandos           
                break;
            case 2: // caso escolha seja 2
                printf("\nMensagem: ");
                setbuf(stdin, NULL); 
                scanf("%[^\n]", linha); //le a mensagem
                sprintf(comando, "mosquitto_pub -h broker.emqx.io -t pi2a/msgs -m '%s'", linha); //publica a mensagem no topico pi2a/msgs
                system(comando);
                break;
            case 3: //caso a escolha seja 3 não faz nada
                break;
            default:
            printf("Opção invalida!!");
            break;
        }
        
    }
    while (escolha!=3); //roda o programa enquanto escolha for diferente de 3 
   
    
   
    return EXIT_SUCCESS;
}
