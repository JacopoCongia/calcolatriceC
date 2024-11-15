/******************************************************************************

Menu di selezione

*******************************************************************************/

#include <stdio.h>
#include "menu.h"

int main()
{
    
    int selezione;
    selezione = stampaMenu();

    printf("\n\tHai scelto l'opzione %d\n",selezione);

    return 0;
}