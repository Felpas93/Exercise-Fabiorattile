#include   <stdio.h>

// 1. presentare introduzione all'utente
// 2. mostrare all'utente un menu di scelta tra a e b
// 3. ricevere in input la scelta dell'utente
// 4. creare o meno una nuova partita in base all'input utente
// 5. ricevere in input nome utente in caso di nuova partita
// 6. ti farò 3 domande, a ognuna di queste ci sarà una risposta a scelta multipla
// 7. valutara la risposta per ogni domanda 
// 8. scrivere punteggio a fine partita
// 9. presentare nuovamente il testo per la scelta tra a)iniziare una nuova partita e b) termina partita

void formatter(){
    for (int i = 0; i < 2; i++)
    {
        puts("\n");
    }
    
}

void introduzione(){

    puts("salve, vi presento il nuovo gioco");
    formatter();
    puts("Ti farò tre domande, ad ognuna di queste vi saranno delle risposte a scelta multipla");
    puts("");
}

int main()
{
    puts("ciao\n");
introduzione();
    return 0;
}


