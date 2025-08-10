# Lezione 06 – Operatori in C++

**Aritmetici, assegnazione, confronto e logica**

Gli operatori sono simboli che permettono di eseguire operazioni su variabili e valori.
In questa lezione analizziamo quattro categorie fondamentali:

1. **Operatori aritmetici** – somma, sottrazione, moltiplicazione, divisione, modulo, incremento/decremento.
2. **Operatori di assegnazione** – assegnano valori (anche con operazioni combinate).
3. **Operatori di confronto** – confrontano due valori e restituiscono `true`/`false`.
4. **Operatori logici** – combinano o negano valori booleani.

## 1. Operatori aritmetici

| Operatore | Nome              | Esempio (`a=7`, `b=3`) | Risultato | Note principali                                                                                               |
| --------- | ----------------- | ---------------------- | --------- | ------------------------------------------------------------------------------------------------------------- |
| `+`       | Addizione         | `a + b`                | `10`      | Somma interi o floating point.                                                                                |
| `-`       | Sottrazione       | `a - b`                | `4`       | Differenza.                                                                                                   |
| `*`       | Moltiplicazione   | `a * b`                | `21`      | Prodotto.                                                                                                     |
| `/`       | Divisione         | `a / b`                | `2`       | **Divisione intera** tronca verso zero se entrambi interi; con `double/float` restituisce il quoziente reale. |
| `%`       | Modulo (resto)    | `a % b`                | `1`       | Solo per interi. Con negativi, il segno del resto segue l’operando sinistro.                                  |
| `++`      | Incremento        | `a++`, `++a`           | `8`       | Post (`a++`) usa il valore **prima**, poi incrementa; Pre (`++a`) incrementa **prima**, poi usa.              |
| `--`      | Decremento        | `b--`, `--b`           | `2`       | Analogo a `++`.                                                                                               |
| `-`       | Negazione unaria  | `-a`                   | `-7`      | Cambia segno.                                                                                                 |
| `+`       | Unario “identità” | `+a`                   | `7`       | In pratica non cambia il valore.                                                                              |

> Precedenza: `*`, `/`, `%` hanno precedenza su `+` e `-`. Le parentesi `(...)` risolvono ogni ambiguità.

## 2. Operatori di assegnazione

L’operatore base è `=`. Esistono varianti combinate che eseguono un’operazione e assegnano il risultato.

| Operatore | Descrizione                    | Esempio (`x=5`, `y=3`) | Risultato di `x` |
| --------- | ------------------------------ | ---------------------- | ---------------- |
| `=`       | Assegnazione                   | `x = y;`               | `3`              |
| `+=`      | Addizione e assegnazione       | `x += y;`              | `8`              |
| `-=`      | Sottrazione e assegnazione     | `x -= y;`              | `2`              |
| `*=`      | Moltiplicazione e assegnazione | `x *= y;`              | `15`             |
| `/=`      | Divisione e assegnazione       | `x /= y;`              | `1`              |
| `%=`      | Modulo e assegnazione          | `x %= y;`              | `2`              |

## 3. Operatori di confronto

Restituiscono `true` se la condizione è vera, `false` altrimenti.

| Operatore | Significato         | Esempio (`x=5`, `y=3`) | Risultato |
| --------- | ------------------- | ---------------------- | --------- |
| `==`      | Uguale a            | `x == y`               | `false`   |
| `!=`      | Diverso da          | `x != y`               | `true`    |
| `>`       | Maggiore di         | `x > y`                | `true`    |
| `<`       | Minore di           | `x < y`                | `false`   |
| `>=`      | Maggiore o uguale a | `x >= y`               | `true`    |
| `<=`      | Minore o uguale a   | `x <= y`               | `false`   |

## 4. Operatori logici

| Operatore | Nome       | Descrizione                                  | Esempio              | Risultato |
| --------- | ---------- | -------------------------------------------- | -------------------- | --------- |
| `&&`      | AND logico | Vero se **entrambi** gli operandi sono veri  | `(x > 0 && y > 0)`   | `true`    |
| `\|\|`    | OR logico  | Vero se **almeno uno** degli operandi è vero | `(x > 0 \|\| y < 0)` | `true`    |
| `!`       | NOT logico | Inverte il valore logico                     | `!(x > y)`           | `false`   |

---

```cpp
#include <iostream>

int main() {
    int a = 7, b = 3;

    // Aritmetici
    int somma = a + b;
    int diff = a - b;
    int prod = a * b;
    int div_int = a / b;  // divisione intera: 7/3 -> 2
    int mod = a % b;      // resto: 7%3 -> 1
    a++;                  // post-incremento: a diventa 8
    --b;                  // pre-decremento: b diventa 2

    // Assegnazione combinata
    int x = 5, y = 3;
    x += y;               // x = 8

    // Confronto
    bool uguale = (x == y);

    // Logica
    bool condizione = (a > 0 && b > 0);

    // Output
    std::cout << "somma: " << somma << '\n';
    std::cout << "diff: " << diff << '\n';
    std::cout << "prod: " << prod << '\n';
    std::cout << "div_int: " << div_int << '\n';
    std::cout << "mod: " << mod << '\n';
    std::cout << "a: " << a << ", b: " << b << '\n';
    std::cout << "x += y -> x: " << x << '\n';
    std::cout << "x == y: " << uguale << '\n';
    std::cout << "a > 0 && b > 0: " << condizione << '\n';

    return 0;
}
```

**Riga 1 – `#include <iostream>`**  
Necessaria per l’output in console.

**Riga 2 – `int main() {`**  
Inizio del programma.

**Riga 3 – `int a = 7, b = 3;`**  
Dichiara due interi da usare negli esempi.

**Riga 6 – `int somma = a + b;`**  
Addizione.

**Riga 7 – `int diff = a - b;`**  
Sottrazione.

**Riga 8 – `int prod = a * b;`**  
Moltiplicazione.

**Riga 9 – `int div_int = a / b;`**  
Divisione **intera** (tronca verso zero).

**Riga 10 – `int mod = a % b;`**  
Resto della divisione intera.

**Riga 11 – `a++;`**  
Post-incremento: usa il vecchio valore e poi incrementa `a`.

**Riga 12 – `--b;`**  
Pre-decremento: decrementa `b` e poi usa il nuovo valore.

**Riga 15 – `int x = 5, y = 3;`**  
Due interi per gli esempi di assegnazione e confronto.

**Riga 16 – `x += y;`**  
Assegnazione combinata: somma e assegna.

**Riga 19 – `bool uguale = (x == y);`**  
Confronto di uguaglianza.

**Riga 22 – `bool condizione = (a > 0 && b > 0);`**  
Combinazione logica con AND.

**Righe 25–33 – `std::cout << ...`**  
Stampa tutti i risultati.
