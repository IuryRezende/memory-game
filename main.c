#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "layout.h"
#include "CardChoice.h"
#include "mensagem.h"


int main(){
    srand(time(NULL));
    int i[2], j[2], option=1, cartas_iguais, resultado;
    char carta[9]={33, 34, 35, 36, 37, 38, 39, 42, 43};
    char matriz[3][3];
    for(int a=0; a<3; a++)
    {
        for(int b = 0; b < 3; b++)
        {
            cartas_iguais=rand()%8;
            matriz[a][b]=carta[cartas_iguais];
        }

    }
    while(option!=0){
        layout(matriz, i, j);
        resultado = card_choice(matriz, i , j);
        if(resultado == 1)
        {
            iftrue(&option);
        }
        else
        {
            iffalse(&option);
        }

    }




  return 0;
}

