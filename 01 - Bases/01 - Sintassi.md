# Lezione 01 – La sintassi del C++

**Struttura di un programma e istruzioni**

In questa lezione cerchiamo di comprendere come funziona la struttura base di un programma C++ e introduciamo il concetto fondamentale di **istruzioni** (in inglese, *statements*).

---

## Esempio base 

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```


## Spiegazione riga per riga

**Riga 1 – `#include <iostream>`**  
Include una libreria chiamata `iostream`. Serve per abilitare funzioni di input e output.  
Per ora basta sapere che in quasi tutti i programmi di base di C++ questa riga è presente.

**Riga 2 – `using namespace std;`**  
Serve ad usare gli elementi della libreria standard (`std`) senza dover scrivere `std::` ogni volta.  
Ad esempio, ci permette di scrivere `cout` al posto di `std::cout`.  
Se non è chiaro come funziona, va bene così per ora, ne vedremo il funzionamento quando studieremo i namespaces.

**Riga 3 – Riga vuota**  
Spazi bianchi e righe vuote **non vengono considerati** dal compilatore.  
Sono usati per rendere il codice più leggibile, specialmente nei programmi più lunghi.  

**Riga 4 – `int main() {`**  
Questa è la funzione principale.  
Ogni programma in C++ parte da qui. Il codice che scriverai all'interno delle parentesi graffe `{}` verrà eseguito.

**Riga 5 – `cout << "Hello World!";`**  
È un'**istruzione**, da qui in avanti le chiamerò **statements**.  
In C++, un programma è composto da una sequenza di statements che vengono eseguiti in ordine.  
Questo in particolare scrive a schermo un messaggio, ma il concetto chiave è che:

> Ogni statement in C++ **termina con il punto e virgola `;`**.

---

**Attenzione:**  

* Il C++ è **case-sensitive**: `cout` e `Cout` sono due cose diverse.  
* Non è necessario scrivere statements uno per riga, poichè **il compilatore ignora gli spazi e i ritorni a capo**, pertanto si può scrivere tutto in una riga sola.  

Alternativa valida:

```cpp
int main() { cout << "Hello World!"; return 0; }
```

---

**Riga 6 – `return 0;`**  
Questa istruzione serve per chiudere la funzione `main()` e indicare che il programma è terminato con successo. Anche qui: è uno statement, e quindi termina con `;`.


**Riga 7 – `}`**  
Chiude il blocco della funzione `main`. Ogni `{` aperta deve avere una `}` corrispondente.

## Esempio con più statement

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Riga uno.";
  cout << "Riga due.";
  return 0;
}
```

Sequenza di esecuzione:

1. Esegue la prima istruzione: stampa "Riga uno."
2. Esegue la seconda istruzione: stampa "Riga due."
3. Esegue `return 0;` e termina il programma

---

### Prossima lezione

Nella prossima lezione vedremo **come gestire l'output**!
