#include "pendu.h"

void pendu(int x){

printf("\n\n");
  switch (x)
  {
    case 0 :
        printf(" +----+\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
        printf("     ===\n");

        /*printf("Missed Letters :");
        printf("\n");
        printf("_ _ _ _ _ _");
        printf("\n"); */

    break;

    case 1:
        printf(" +----+\n");
        printf(" O    |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
        printf("     ===");
    break;

    case 2:
        printf(" +----+\n");
        printf(" O    |\n");
        printf(" |    |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
        printf("     ===");
    break;

    case 3:
        printf(" +----+\n");
        printf(" O    |\n");
        printf("/|    |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
        printf("     ===");
    break;

    case 4:
        printf(" +----+\n");
        printf(" O    |\n");
        printf("/|\\   |\n");
        printf("      |\n");
        printf("      |\n");
        printf("      |\n");
        printf("     ===");
    break;

    case 5:
        printf(" +----+\n");
        printf(" O    |\n");
        printf("/|\\   |\n");
        printf("/     |\n");
        printf("      |\n");
        printf("      |\n");
        printf("     ===");
    break;

    case 6:
        printf(" +----+\n");
        printf(" O    |\n");
        printf("/|\\   |\n");
        printf("/ \\   |\n");
        printf("      |\n");
        printf("      |\n");
        printf("     ===\n");
        /*printf("");
        printf(" Vous etes pendu !"); */
    break;

    default:
        printf("FIN");
    break;

  }

  printf("\n");

} 



/*---------------------------------------------------------------------------------------

        +------+ 
        O      |
       /|\     |
       / \     |
               |
            =======
---------------------------------------------------------------------------------------*/
       