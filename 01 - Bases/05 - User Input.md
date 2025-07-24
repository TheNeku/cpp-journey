# Lezione 05 – User Input in C++

**L’interazione con l’utente** può avvenire tramite la tastiera grazie alla variabile predefinita `cin`, che si usa per **ricevere input**.  
È fondamentale per qualunque programma che voglia **leggere dati inseriti dall’utente**, come numeri o stringhe.

---

## Spiegazione

| Comando | Significato       | Operatore associato |
| ------- | ----------------- | ------------------- |
| `cout`  | Output su schermo | `<<` (inserimento)  |
| `cin`   | Input da tastiera | `>>` (estrazione)   |


Hai già imparato che `cout` viene utilizzato per stampare (mostrare) valori in output. Ora useremo `cin` per ottenere input dall’utente.  
`cin` è una variabile predefinita che legge i dati dalla tastiera usando l’**operatore di estrazione** (`>>`).  
Nel seguente esempio, l’utente può inserire un numero, che verrà memorizzato nella variabile `x`.  
Successivamente, stampiamo il valore di `x`:


```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Scrivi un numero: ";  // Messaggio per l’utente
    cin >> x;                   // L’utente inserisce un numero
    cout << "Il tuo nuero è: " << x;
    return 0;
}
```

`int x;` Crea una variabile intera chiamata `x`.  
`cout << "Type a number: ";` Mostra un messaggio all’utente per indicargli cosa fare.  
`cin >> x;` Aspetta che l’utente digiti un numero e prema invio. Il valore inserito viene salvato in `x`.  
`cout << "Your number is: " << x;` Stampa il numero che l’utente ha inserito.  



## Tips

`cin` legge **solo il primo valore valido** compatibile con il tipo della variabile.  
Se scrivi più valori separati da spazi, `cin` assegna il **primo** alla variabile.  
Se inserisci un tipo sbagliato (es. una lettera al posto di un numero), `cin` **va in errore** e blocca l’input successivo.

---

## Prossima lezione

Nella prossima lezione andremo a studiare i **Data Types**
