# Lezione 13 – Ciclo `for` in C++

**Iterazioni con contatore integrato**

Il ciclo `for` è uno dei costrutti più usati per eseguire un blocco di codice **un numero predefinito di volte**.
La sua forza sta nel fatto che **inizializzazione**, **condizione** e **aggiornamento** della variabile di controllo si trovano nella stessa riga.

```cpp
for (inizializzazione; condizione; aggiornamento) {
    // Codice eseguito finché la condizione è vera
}
```

* **inizializzazione** – di solito crea e inizializza la variabile di controllo.
* **condizione** – viene valutata **prima** di ogni iterazione; se è `false`, il ciclo termina.
* **aggiornamento** – eseguito **alla fine** di ogni iterazione, per modificare la variabile di controllo.

---

```cpp
#include <iostream>

int main() {
    for (int i = 0; i < 5; i++) {
        std::cout << "i vale: " << i << '\n';
    }
    return 0;
}
```

**Riga 1 – `#include <iostream>`**  
Serve per usare `std::cout` e stampare in console.

**Riga 4 – `for (int i = 0; i < 5; i++)`**  

* `int i = 0` → inizializza il contatore `i` a 0.
* `i < 5` → il ciclo continua finché `i` è minore di 5.
* `i++` → incrementa `i` di 1 al termine di ogni iterazione.

**Riga 5 – `std::cout << ...`**  
Mostra il valore attuale di `i`.

## Uso con più variabili

Il `for` può inizializzare e aggiornare più variabili, separate da virgola:

```cpp
for (int a = 0, b = 10; a < b; a++, b--) {
    std::cout << a << " - " << b << '\n';
}
```
## Parti opzionali

Tutte e tre le sezioni del `for` possono essere omesse:

```cpp
int i = 0;
for ( ; i < 3; ) {
    std::cout << i << '\n';
    i++;
}
```

In questo caso il ciclo si comporta come un `while`.
