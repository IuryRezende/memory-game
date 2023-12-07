#include "mensagem.h"


void iftrue(int *option)
{
    printf("YOU WIN !!!\n");
    printf("PRESS 0 TO CANCEL OR 1 TO CONTINUE: ");
    scanf("%d", option);
    printf("----------------------------------\n");
}
void iffalse(int *option)
{
    printf("YOU FAILED!!\n");
    printf("TRY AGAIN\n");
    printf("----------------------------------\n");
    *option = 1;
}
