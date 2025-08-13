# Lezione 17 – `enum` in C++

**Definire insiemi di costanti con nomi leggibili**

Un **enum** (*enumeration*) è un tipo definito dall’utente che permette di assegnare **nomi significativi** a un insieme di valori costanti interi.
È utile quando un valore può appartenere solo a un gruppo limitato e ben definito di opzioni, migliorando la leggibilità e riducendo errori.

**Sintassi:**

```cpp
enum NomeEnum {
    COSTANTE1,
    COSTANTE2,
    COSTANTE3
};
```

* Ogni **costante** all’interno dell’enum rappresenta un numero intero (`int` di default).
* Il primo valore parte da **0**, e ciascun elemento successivo incrementa di 1, salvo specificare diversamente.

```cpp
#include <iostream>

enum Colore {
    ROSSO,    // 0
    VERDE,    // 1
    BLU       // 2
};

int main() {
    Colore c = VERDE;

    std::cout << "Valore numerico: " << c << '\n';

    if (c == VERDE) {
        std::cout << "Il colore è verde\n";
    }

    return 0;
}
```

**Output:**

```
Valore numerico: 1
Il colore è verde
```

## Assegnare valori personalizzati

È possibile assegnare numeri specifici:

```cpp
enum Livello {
    BASSO = 1,
    MEDIO = 5,
    ALTO = 10
};
```

In questo caso, `MEDIO` vale 5 e `ALTO` vale 10.

## Enum e `switch`

Gli enum sono molto usati con il costrutto `switch`:

```cpp
switch (c) {
    case ROSSO:
        std::cout << "Rosso\n";
        break;
    case VERDE:
        std::cout << "Verde\n";
        break;
    case BLU:
        std::cout << "Blu\n";
        break;
}
```

## `enum class`

In C++ moderno, si preferisce usare **enum class** perché:

* Evita conflitti di nomi (i valori sono nello scope dell’enum).
* Richiede di specificare il nome dell’enum per accedere ai valori.

```cpp
enum class Direzione {
    SU,
    GIU,
    SINISTRA,
    DESTRA
};

Direzione d = Direzione::SU;
```
