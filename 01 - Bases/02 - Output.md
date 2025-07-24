# Lezione 02 – L’output in C++

**Stampare testo, numeri e andare a capo**  

In questa lezione approfondiamo il funzionamento del comando `cout`, usato per **scrivere messaggi sullo schermo**.  
Vedremo come stampare **testo**, **numeri**, eseguire **operazioni** e **andare a capo**.

---

## Stampare testo con `cout`

Il comando `cout` (console output) è fornito dalla libreria `iostream`, già vista nella lezione precedente.  

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!!";
  return 0;
}
```

### Spiegazione:

* `cout` è l’oggetto che stampa.  
* `<<` è l’operatore di inserimento. “Inserisce” il testo nell’output.  
* Il testo da stampare va **tra virgolette doppie** `"..."`.  
* Lo statement termina sempre con `;`  


Puoi scrivere più `cout` uno dopo l’altro:

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Ciao!";
  cout << " Sto imparando C++.";
  return 0;
}
```

### Risultato

```
Ciao! Sto imparando C++.
```

**Nota:** non viene automaticamente inserito un a capo, vedremo come fare più avanti.


## Stampare numeri

Puoi usare `cout` anche per stampare numeri, tuttavia devi farlo **senza le virgolette**:

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << 42;
  return 0;
}
```

Puoi anche stampare il **risultato di operazioni matematiche**:

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << 3 + 3;
  cout << 5 * 2;
  return 0;
}
```

### Risultato:

```
610
```

(*N.B.: Non ci sono a capo o spazi, quindi i numeri verranno stampati attaccati*)


## Andare a capo con `\n`

Il carattere speciale `\n` serve per **mandare il testo alla riga successiva**.  
È una **escape sequence**, cioè un simbolo di controllo usato all’interno delle stringhe per indicare azioni specifiche che non sono caratteri visibili.  

*Curiosità: Il termine escape significa "scappare" o "uscire". Quando il compilatore legge una barra `\`, capisce che il carattere che segue non va interpretato normalmente, ma come un’istruzione non convenzionale.*


```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Riga uno.\n";
  cout << "Riga due.";
  return 0;
}
```

### Risultato:

```
Riga uno.
Riga due.
```

---

## A capo con `<< "\n"` o più `\n`

Puoi anche scrivere `"\n"` usando un altro `<<`:

```cpp
cout << "Riga uno." << "\n";
cout << "Riga due.";
```

Puoi aggiungere più newline consecutivi:

```cpp
cout << "Ciao!" << "\n\n";
cout << "Linea successiva.";
```

### Risultato:

```
Ciao!

Linea successiva.
```


## Alternativa: `endl`

Un’altra opzione è usare `endl`, che funziona come `\n`:

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Riga uno." << endl;
  cout << "Riga due.";
  return 0;
}
```

### Differenza tra `\n` e `endl`:

* Entrambi mandano il testo a capo.
* `endl` **svuota il buffer di output** (cosa che vedremo in dettaglio più avanti), quindi è **più lento** se usato spesso.
* In genere, si preferisce `\n` per prestazioni migliori.


## Escape Sequences che potrebbero tornarti utili:


| Escape | Significato             |
| ------ | ----------------------- |
| `\n`   | Nuova riga              |
| `\t`   | Tabulazione orizzontale |
| `\\`   | Backslash `\`           |
| `\"`   | Virgolette doppie `"`   |


### Esempio:

```cpp
cout << "Ciao\tMondo!\n";
cout << "Stampo una \\ barra\n";
cout << "Uso le virgolette: \"C++\"";
```

### Risultato

```cpp
Ciao    Mondo!
Stampo una \ barra
Uso le virgolette: "C++"
```


---

## Prossima lezione

Nella prossima lezione andremo a studiare  **il funzionamento dei commenti in C++**
