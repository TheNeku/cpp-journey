# Lezione 09 – I booleans in C++

**Valori logici e operazioni booleane**

Il tipo **boolean**, in italiano **booleano** (`bool`) in C++ serve a rappresentare **due soli stati logici**:

* `true` (vero)
* `false` (falso)

I booleani sono usati per controllare il flusso di esecuzione del programma, come nei costrutti `if`, `while` o nei risultati di confronti (`x > y`, `a == b`, ecc.).

In memoria, un `bool` occupa in genere **1 byte**, anche se bastano 1 o 2 bit per rappresentarlo (l’uso di 1 byte è per motivi di allineamento e velocità).


## Dichiarazione e assegnazione

```cpp
bool acceso = true;
bool spento = false;
```

Puoi anche ottenere un `bool` come risultato di un’espressione logica:

```cpp
bool maggiore = (5 > 3); // true
```

## Conversione implicita

* Un valore **zero** (es. `0`, `0.0`, `'\0'`) è considerato `false`.
* Un valore **non zero** è considerato `true`.

```cpp
bool test1 = 0;    // false
bool test2 = 42;   // true
```

## Output dei booleani

Di default, `std::cout` stampa:

* `1` per `true`
* `0` per `false`

Puoi usare `std::boolalpha` per stampare `true` e `false` in lettere:

```cpp
std::cout << std::boolalpha << acceso; // stampa: true
```

## Operatori logici con i booleani

I booleani si combinano con:

* `&&` (AND logico)
* `||` (OR logico)
* `!`  (NOT logico)

Esempio:

```cpp
bool condizione = (x > 0 && y > 0);
```

---

```cpp
#include <iostream>

int main() {
    bool acceso = true;
    bool spento = false;

    std::cout << "acceso: " << acceso << '\n';
    std::cout << "spento: " << spento << '\n';

    bool maggiore = (5 > 3);
    bool uguale = (5 == 3);

    std::cout << "5 > 3: " << maggiore << '\n';
    std::cout << "5 == 3: " << uguale << '\n';

    std::cout << std::boolalpha;
    std::cout << "acceso (boolalpha): " << acceso << '\n';
    std::cout << "spento (boolalpha): " << spento << '\n';

    int numero = 0;
    bool test1 = numero; // false, perché numero è 0
    numero = 42;
    bool test2 = numero; // true, perché numero != 0

    std::cout << "test1: " << test1 << '\n';
    std::cout << "test2: " << test2 << '\n';

    bool condizione = (test2 && !test1);
    std::cout << "condizione: " << condizione << '\n';

    return 0;
}
```

**Riga 1 – `#include <iostream>`**  
Per stampare valori in console.

**Riga 4 – `bool acceso = true;`**  
Variabile booleana inizializzata a `true`.

**Riga 5 – `bool spento = false;`**  
Variabile booleana inizializzata a `false`.

**Righe 7–8 – `std::cout << ...`**  
Stampa dei booleani (di default `1` e `0`).

**Riga 10 – `bool maggiore = (5 > 3);`**  
Risultato di un confronto: `true`.

**Riga 11 – `bool uguale = (5 == 3);`**  
Risultato di un confronto: `false`.

**Righe 13–14**  
Stampa dei risultati dei confronti.

**Riga 16 – `std::cout << std::boolalpha;`**  
Modifica l’output dei `bool` per mostrare `true`/`false` in lettere.

**Righe 17–18**  
Stampa con `boolalpha`.

**Riga 20 – `int numero = 0;`**  
Valore zero.

**Riga 21 – `bool test1 = numero;`**  
Conversione implicita: `false`.

**Riga 22 – `numero = 42;`**  
Valore non zero.

**Riga 23 – `bool test2 = numero;`**  
Conversione implicita: `true`.

**Righe 25–26**  
Stampa dei risultati delle conversioni.

**Riga 28 – `bool condizione = (test2 && !test1);`**  
AND logico con NOT: `true && true` → `true`.

**Riga 29 – `std::cout << ...`**  
Stampa del risultato finale.
