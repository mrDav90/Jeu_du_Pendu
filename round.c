#include "round.h"

int RandomNumber()
{
    int n;
    srand(time(NULL));
    n = rand() % 10 + 1;
    return n;

}

char* RandomMot( char *Mots[]) {
    int n;

    //srand(time(NULL));
    //n = rand() % 10 + 1 ; 

    n = RandomNumber();

    for (int i = 0; i < 10; i++)
    {
       if (i == n)
       {
           return Mots[n] ;
       }
       else
       {
           continue;
       }
       
    }
}

char* RandomIndice( char *Indices[]) {
    int n;

    //srand(time(NULL));
    //n = rand() % 10 + 1 ; 

    n = RandomNumber();

    for (int i = 0; i < 10; i++)
    {
       if (i == n)
       {
           return Indices[n] ;
       }
       else
       {
           continue;
       }
       
    }
}
