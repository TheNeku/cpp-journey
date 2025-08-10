# Lezione 12 – While Loop in C++

**Esecuzione ripetuta di istruzioni**

I cicli (`loop`) permettono di eseguire più volte un blocco di codice finché una condizione è vera.
In questa lezione analizziamo due tipi di loop:

* **`while`** – controlla la condizione **prima** di eseguire il blocco.
* **`do...while`** – esegue il blocco **almeno una volta**, poi controlla la condizione.

## 1. Ciclo `while`

Struttura di base:

```cpp
while (condizione) {
    // codice ripetuto finché la condizione è vera
}
```

* La **condizione** è valutata **prima** di ogni iterazione.
* Se la condizione è `false` fin dall’inizio, il blocco non viene mai eseguito.

---

## 2. Ciclo `do...while`

Struttura di base:

```cpp
do {
    // codice eseguito almeno una volta
} while (condizione);
```

* Il blocco viene **sempre** eseguito almeno una volta, anche se la condizione è `false` all’inizio.
* La condizione è valutata **dopo** il blocco.


## Differenze principali

| Caratteristica       | `while`                              | `do...while`                                  |
| -------------------- | ------------------------------------ | --------------------------------------------- |
| Controllo condizione | All’inizio                           | Alla fine                                     |
| Esecuzione minima    | Può essere **zero**                  | Sempre **almeno una volta**                   |
| Uso tipico           | Quando non si sa se entrare nel loop | Quando il blocco va eseguito almeno una volta |

```cpp
#include <iostream>

int main() {
    int i = 0;

    // Ciclo while
    while (i < 3) {
        std::cout << "i vale: " << i << '\n';
        i++;
    }

    std::cout << "------\n";

    // Ciclo do...while
    int j = 0;
    do {
        std::cout << "j vale: " << j << '\n';
        j++;
    } while (j < 3);

    return 0;
}
```

**Riga 1 – `#include <iostream>`**  
Per stampare in console.

**Riga 4 – `int i = 0;`**  
Inizializza la variabile di controllo `i`.

**Riga 7 – `while (i < 3)`**  
Controlla che `i` sia minore di 3 prima di eseguire il blocco.

**Riga 8 – `std::cout << ...`**  
Stampa il valore attuale di `i`.

**Riga 9 – `i++;`**  
Incrementa `i` di 1 a ogni iterazione.

**Riga 13 – Stampa linea di separazione**  
Serve solo a distinguere l’output dei due cicli.

**Riga 16 – `int j = 0;`**  
Variabile di controllo per il `do...while`.

**Righe 17–20 – `do { ... } while (j < 3);`**  
Esegue il blocco e poi controlla se ripetere il ciclo.
