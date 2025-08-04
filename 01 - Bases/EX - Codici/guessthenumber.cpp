/*
Come tutti i .cpp in questa cartella questo programma è qui per darvi una visione complessiva degli argomenti studiati.
Sono semplici programmi per mostrarvi vari modi per applicare le conoscenze fino ad ora acquistie! 
CERCATE CIO' CHE VI INTERESSA!
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    char ripeti;

    do {
        srand(time(0));
        int numsecret = rand() % 100 + 1;
        int numero;
        int difficolta;
        int tentativiMax = 0;
        int punteggio = 10;

        cout << "Scegli la difficoltà:\n";
        cout << "1. Facile (10 tentativi)\n";
        cout << "2. Normale (5 tentativi)\n";
        cout << "3. Difficile (3 tentativi)\n";
        cin >> difficolta;

        switch (difficolta) {
            case 1: {
                tentativiMax = 10;
                break;
            }
            case 2: {
                tentativiMax = 5;
                break;
            }
            case 3: {
                tentativiMax = 3;
                break;
            }
            default: {
                cout << "Difficoltà non valida!\n";
                continue;
            }
        }

        cout << "\nHo scelto un numero tra 1 e 100. Prova a indovinarlo!\n";

        for (int tentativo = 1; tentativo <= tentativiMax; tentativo++) {
            cout << "Tentativo " << tentativo << ": ";
            cin >> numero;

            if (numero < 1 || numero > 100) {
                cout << "Devi inserire un numero compreso tra 1 e 100!\n";
                tentativo--;
                continue;
            }

            if (numero == numsecret) {
                cout << "Esatto! Hai indovinato in " << tentativo << " tentativi.\n";
                cout << "Hai totalizzato " << punteggio << " punti!\n";
                break;
            } else if (numero < numsecret) {
                cout << "Troppo basso!\n";
            } else {
                cout << "Troppo alto!\n";
            }

            punteggio--;

            if (tentativo == tentativiMax) {
                cout << "Tentativi esauriti! Il numero era " << numsecret << ".\n";
            }
        }

        cout << "\nVuoi giocare un altro round (s/n)? ";
        cin >> ripeti;

    } while (ripeti == 's');

    cout << "Ci si vede!\n";
    return 0;
}
