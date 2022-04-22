#include <stdio.h>
#include "jouer.h"
void Interface();
int main(int argc, char const *argv[])
{

    Interface();
    return 0;
}



void Interface()
{
    system("cls");

    int choixMenu = 0;
    char response;
    printf("--------------------------------\n");
    printf(" BIENVENUE DANS LE JEU DU PENDU \n");
    printf("--------------------------------\n\n");
    printf("MENU PRINCIPAL\n");
    printf("--------------\n\n");
    printf("1:JOUER\n\n");
    printf("2:QUITTER\n\n");

    option :
    printf("Choisissez une option!!!!!\n");
    scanf("%d",&choixMenu);
    fflush(stdin);
    
    switch(choixMenu)
    {
        case 1 : 
            Jouer() ;
            break;
        case 2 : 
            
            requestionner :
            printf("Etes-vous sur de quitter le jeu ? Entrer (O/o) ou (N/n) :\t");
            scanf("%c",&response);
            fflush(stdin);

            if((response == 'O') || (response == 'o') )
            {
                printf("Bye");
                exit(0);
            }
            else if ((response == 'N') || (response == 'n'))
            {
                Interface();
            }
            else
            {
                goto requestionner;
            }
            
            break;
        default : ;
            goto option;
            break;
    }

}




/*
A faire

un menu principal qui sera constituer des options , jouer et quitter
refaire les pendules
une procedure qui  prendra en parametre un entier 
pour chaque cas , on aura un pendule correspondant. En tout on doit avoir 6cas 
*/
