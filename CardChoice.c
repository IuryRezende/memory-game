#include "CardChoice.h"
#include "layout.h"

int card_choice(char matriz[3][3], int i[], int j[])
{
    i[0] -= 1;
    i[1] -= 1;
    j[0] -= 1;
    j[1] -= 1;
    if(matriz[i[0]] [j[0]] == matriz[i[1]] [j[1]])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
