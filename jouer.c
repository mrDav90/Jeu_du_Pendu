#include "jouer.h"

void Jouer()
{

    char* Mots[] = {"vache" , "table" , "alcool" ,"flacon" , "genie" , "logiciel" , "chien" , "anticonstitutionnellement" , "pain" , "chaussure"}; 
    char*Indices[] = {"Je suis un bovin" ,"j ai 4 pieds" , "je suis un liquide piquant" , "On a besoin de moi pour des experiences en chimie" , "geek" , "fiable,performant,utilisable" , "os", "Je fus le plus long mot de l'alphabet francais","je rompt souvent le jeune au Senegal","on ne peut sortir sans moi"};

    char MotADeviner[MAX];
    char IndiceMotADeviner[150];
    strcpy(MotADeviner , RandomMot(Mots)); // RandomMot va se charger de choisir aléatoirement le mot secret dans le tableau de mots. Ce mot sera copié dans la variable MotADeviner
    strcpy(IndiceMotADeviner , RandomIndice(Indices));

    //system("COLOR F0");
    Loading();
    
    Traitement(MotADeviner , IndiceMotADeviner);
            
}


void Loading(){
    printf("\nChargement");
    for (int i = 0; i < 3; i++)
    {
        printf(".");
        Sleep(1000);
    }
    system("cls");

}



