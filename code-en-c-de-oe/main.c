#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define max1 20
#define max2 20

typedef struct
{
    int x;
    int y;
}oiseau;

void afficher_espace(int tab[max1][max2])
{
    int i,j;
    for(i=0;i<max1;i++)
    {
        for(j=0;j<max2;j++)
            printf(" %c ",tab[i][j]);

        printf("\n");
    }
}

int main()
{
    // initialisation

    int i,j,nombre_aleatoire,n,nombre_aleatoire2,n2;
    char *tab[max1][max2];

    for(i=0;i<max1;i++)
        for(j=0;j<max2;j++)
            tab[i][j]='.';

    oiseau *o1;
    o1=malloc(sizeof(oiseau));
    o1->x=20;
    o1->y=20;
    tab[o1->x][o1->y]='&';



    while(1)
    {
        system("cls");

        afficher_espace(&tab);

        nombre_aleatoire = rand();
        n=nombre_aleatoire%3;

        nombre_aleatoire2 = rand();
        n2=nombre_aleatoire2%3;

        if(n==2) n=-1;
        if(n2==2) n2=-1;
        tab[o1->x][o1->y]='.';
        if(o1->x+n < max1 && o1->x+n > 0) o1->x+=n;
        if(o1->y+n2 < max2 && o1->y+n2 > 0) o1->y+=n2;

        tab[o1->x][o1->y]='&';
    }
    return n;
}
