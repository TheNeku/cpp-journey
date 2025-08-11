# Lezione 15 – Array in C++

**Memorizzare più valori in un’unica variabile**

Un **array** è una collezione di più elementi dello **stesso tipo** memorizzati in posizioni contigue di memoria.
Ogni elemento può essere identificato e accessibile tramite un **indice**, che parte sempre da **0**.

Gli array sono utili quando si ha bisogno di gestire più valori correlati senza creare più variabili separate.

**Sintassi:**

```cpp
tipo nome[dimensione];
```

* **tipo** – il tipo di dati degli elementi (es. `int`, `double`, `char`...).
* **nome** – il nome dell’array.
* **dimensione** – il numero di elementi contenuti.

```cpp
int numeri[5] = {10, 20, 30, 40, 50};
```

## 1. Array e cicli

L’uso combinato di array e cicli (`for`, `while`) permette di leggere o scrivere rapidamente più valori.

```cpp
#include <iostream>

int main() {
    int numeri[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento " << i << ": " << numeri[i] << '\n';
    }

    return 0;
}
```

## Omettere la dimensione

Se si inizializza l’array al momento della dichiarazione, si può omettere la dimensione:

```cpp
int numeri[] = {10, 20, 30, 40, 50};
```

Il compilatore calcolerà automaticamente la dimensione in base agli elementi forniti.


## Trovare la dimensione di un array

È possibile calcolare il numero di elementi di un array statico usando:

```cpp
int dimensione = sizeof(numeri) / sizeof(numeri[0]);
```

* `sizeof(numeri)` → restituisce la dimensione in byte dell’intero array.
* `sizeof(numeri[0])` → restituisce la dimensione di un singolo elemento.

---

```cpp
#include <iostream>

int main() {
    int punteggi[5] = {85, 90, 78, 92, 88};

    int n = sizeof(punteggi) / sizeof(punteggi[0]);

    for (int i = 0; i < n; i++) {
        std::cout << "Studente " << i + 1 << ": " << punteggi[i] << '\n';
    }

    return 0;
}
```


## 6. Array multidimensionali

Gli array possono avere più di una dimensione.
Un esempio comune è una **matrice** (array bidimensionale).

**Sintassi:**

```cpp
tipo nome[righe][colonne];
```

```cpp
#include <iostream>

int main() {
    int matrice[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            std::cout << matrice[r][c] << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}
```

**Output:**

```
1 2 3
4 5 6
```
