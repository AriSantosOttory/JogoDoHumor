#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//o jogo consiste em saber o nosso estado de humor
//criar um array com varias palavras que indiquem o nosso estado de humor
//solicitar ao utilizador o primeiro nome
//somar as letras de forma a obter o numero total
//fazer uma divisao inteira para obter o resto para saber qual é o estado de humor a que pertence
//mostrar o resultado
int main()
{
    //declarar variaveis
    char humor[10][15];
    char nome[15];
    int i;
    int total;
    int indice;

    //preencher as variaveis
    strcpy(humor[0],"feliz");
    strcpy(humor[1],"zangado");
    strcpy(humor[2],"triste");
    strcpy(humor[3],"cansado");
    strcpy(humor[4],"euforico");
    strcpy(humor[5],"brincalhao");
    strcpy(humor[6],"furioso");
    strcpy(humor[7],"nostalgico");
    strcpy(humor[8],"contente");
    strcpy(humor[9],"alegre");


    printf("Digite o seu nome!\n");
    scanf("%s", &nome);


    i = 0;
    total = 0;
    while(nome[i] != '\0' ) // fim de texto ->  "\0"
    {
        total = total + (int) nome[i];
        i++;
    }

    indice = total % 10;
    printf("%2s %20s\n", nome, humor[indice]);


    return 0;
}
