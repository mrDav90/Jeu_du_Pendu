#include "traitement.h"
#include "pendu.h"
#include "jouer.h"
void Rejouer();
void Traitement(char motADeviner[] , char indiceMotADeviner[]){

    int inc = 0;
    int nombreEssais = 15;
    int status = 0;
    int index = 0;
    int tailleMotADeviner = strlen(motADeviner);
    char tableauDynamique[tailleMotADeviner];
    char tableauLettresRates[tailleMotADeviner];
    char lettre ;

    
    printf("\nIndice:  %s \n",indiceMotADeviner); //Indice du mot secret
    printf("\nDeviner le mot secret\n\n");

    for (int i = 0; i < tailleMotADeviner; i++)
    {
        tableauDynamique[i] = '_';      // Initialiser le tableau dynamique chaque caractere du mot à _
        printf(" %c ",tableauDynamique[i]); 

    }

    pendu(inc); // initialisation du pendu 


    for (int i = 0; i < nombreEssais; i++)
    {
        tableauLettresRates[i] = '\0'; 
    } 


    do // On rentre la boucle tant qu'on a pas epuisé le nombre de tentatives (15)
    {

        
        printf("\n\nEntrer une lettre : \t");
        lettre = getchar();
        fflush(stdin);


       


        // test de la lettre entree
        for (int i = 0; i < tailleMotADeviner; i++)  
        {
            if (lettre != motADeviner[i])
            {
                status +=1; 
                
                /*  on parcours la chaque caractere du mot secret , si la lettre saisie par
                    l'utilisateur ne figure pas dans touta la chaine, status va s'incrementer
                */
            }
            else
            {
                goto succes; // sinon on va directement à l'instruction succes
            }
            
        }

        if (status !=0)
        {
            pendu(++inc);

            printf("\nLettres Ratees : ");
            tableauLettresRates[index] = lettre;  
            for (int i = 0; i < nombreEssais; i++)
            {
                printf("%c ",tableauLettresRates[i]);
            } 
            printf("\n");
            
            if (inc == 6)
            {
                printf("\nGAME OVER , LE MOT SECRET EST '%s'. \n\n", motADeviner);
                Rejouer();
                break;
            }

            //goto Fausse;
            
        }

        //

        /*for (int i = 0; i < tailleMotADeviner; i++)
        {
            printf("%c\t" , tableauFaussesLettres[i]);
        } */


      
                    
        int statutCourante = 0;
        // Gerer les succes
        succes :  
        
        for (int i = 0; i < tailleMotADeviner; i++)
        {
            if (lettre == motADeviner[i])
            {
                tableauDynamique[i] =  lettre ;     
                statutCourante = 1;
                /*  Lorsqu'on parcours le tableau, si la lettre entrée par l'utilisateur 
                    figure dans la chaine du mot secret , tableau dynamique recoit cette lettre  
                    Tableau Dynamique est un tableau qui va se charger de recevoir et afficher chaque bonne lettre  
                */
            }
        }

        // afficher le statut courant    du pendu meme si la lettre choisie est bonne
        if (statutCourante !=0)
        {
            pendu(inc); //////
            printf("\nLettres ratees : ");
            for (int i = 0; i < nombreEssais; i++)
            {
                printf("%c ",tableauLettresRates[i]);
            } 
            printf("\n");
  
        }
        
        printf("\n");


        
        for (int i = 0; i < tailleMotADeviner; i++)
        {    
            printf(" %c ",tableauDynamique[i]); 
            // Affichage du tableau dynamique
        }                   
        printf("\n"); 



        int dec = tailleMotADeviner;
        for (int i = 0; i < tailleMotADeviner; i++)
        {
            if (tableauDynamique[i] != '_')
            {
                dec -= 1; 
                /* Lorsqu'on parcours le tableau dynamique , si une colonne vient à etre different du caractere "-"
                    alors on decremente la variable dec : cela veut dire que une lettre a été trouvé et cela justement 
                    pourquoi le tableau dynamique a recu cettre lettre 
                */
            }
            
        }

        if (dec == 0)
        {
            printf("\nBRAVO , LE MOT SECRET EST '%s'. \n\n", motADeviner); 
            /* Une fois que notre dec est à 0 , alors ca veut dire qu'il n'ya plus de "_" 
                dans notre tableau dynamique , ceci dit l'utilisateur a pu trouver toutes les lettres 
                dans le cas contraire le tableau dynamique ne prendrait meme pas ces valeurs 
             */
            Rejouer();
        }


        index++;
    }
    while(index< nombreEssais );

    printf("\n\n");
   
}


void Rejouer()
{
    char resp;
    printf("Rejouer ? Entrer O/o ou N/n : \t");
    scanf("%c",&resp);
    fflush(stdin);
    system("cls");
    if ((resp == 'O') || (resp == 'o'))
    {
        Jouer();
    }
    else
    {
        printf("Bye");
        exit(0);
    }
}