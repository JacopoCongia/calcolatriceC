#include <stdio.h>
#include "menu.h"

int stampaMenu() {
    
    int selezione;
    
    printf("\n\n\t\xC4### ######## ######## ###%c\n", 191); // ho provato ad usare diversi metodi per inserire caratteri della tavola ASCII Estesa
    printf("\t#                         #\n");              // in questo caso C4 preceduto da x (che indica un valore esadecimale) corrisponde a un simbolo
    printf("\t#  Scegli un'operazione   #\n");              // anche l'indicatore di formato %c nella stringa di formattazione seguito dal parametro 191 (decimale)
    printf("\t#                         #\n");              // corrisponde ad un altro simbolo nella tavola ASCII Estesa, ma credo che il terminale di OnlineGDB 
    printf("\t#    1. Addizione         #\n");              // non riesca a visualizzarli
    printf("\t#    2. Sottrazione       #\n");
    printf("\t#    3. Moltiplicazione   #\n");
    printf("\t#    4. Modulo            #\n");
    printf("\t#    \u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500\u2500    #\n");  // in questo caso ho usato il codice unicode corrispondente al simbolo desiderato
    printf("\t#    5. Esci              #\n");
    printf("\t#                         #\n");
    printf("\t#### ######## ######## ####\n");
    
    printf("\n\t");
    scanf("%d", &selezione);
    
    return selezione;
    
    /*
        Da implementare:
        
        X 1. ricevere input dall'utente (scanf) per selezionare opzione desiderata (if/else?)
          2. importare menu.c nel programma calcolatrice e decidere come gestire le librerie
        X 3. controllare tabella ASCII estesa per implementare caratteri speciali grafici al posto dei #
        X 4. Modifica della funzione che non prevede parametri ma che restituisce un valore (scelta)
        X 5. aggiungere opzione "nessuna"
        
    */
    
}