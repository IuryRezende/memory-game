#include "layout.h"
#include "CardChoice.h"

void layout(char matriz[3][3], int i[], int j[])
{
    int b=1;
    printf("   1   2   3\n");
    for(int a = 1; a <= 9; a++)
    {
        if(a == 1 || a == 4 || a == 7)
        {
            b=b;
            printf("%d  ", b);
            b+=1;
        }
        printf("%c", 63);
        if(a % 3 != 0)
        {
            printf(" | ");
        }
        if(a == 3 || a == 6 )
        {
            printf("\n  ---|---|---\n");
        }
    }
    printf("\n\n");
    printf("choose a card: ");
    scanf("%d %d", &i[0], &j[0]);
    printf("= %c\n", matriz[i[0]-1][j[0]-1]);
    printf("choose a another card: ");
    scanf("%d %d", &i[1], &j[1]);
    printf("= %c\n", matriz[i[1]-1][j[1]-1]);
}
