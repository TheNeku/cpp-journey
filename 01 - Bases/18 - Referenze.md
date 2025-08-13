# Lezione 18 – Reference in C++

**Un alias per una variabile esistente**

Una **reference** (riferimento) è un **alias**, cioè un altro nome per una variabile già esistente.
Quando si crea una reference, essa **punta** alla stessa area di memoria della variabile originale, quindi ogni modifica fatta attraverso la reference si riflette sulla variabile e viceversa.

Le reference sono utili quando:

* Si vuole evitare di creare copie non necessarie.
* Serve un nome alternativo per la stessa variabile.
* Si desidera modificare un dato usando un alias.

**Sintassi:**

```cpp
tipo &nomeReference = variabile;
```

* `&` in questo caso fa parte del tipo, **non** è l’operatore di indirizzo.
* La reference deve essere inizializzata al momento della dichiarazione.

```cpp
#include <iostream>

int main() {
    int x = 10;      // variabile originale
    int &ref = x;    // reference a x

    std::cout << "x: " << x << '\n';
    std::cout << "ref: " << ref << '\n';

    ref = 20; // modifica anche x
    std::cout << "Dopo modifica: x = " << x << '\n';

    x = 30; // modifica anche ref
    std::cout << "Dopo modifica di x: ref = " << ref << '\n';

    return 0;
}
```

**Output:**

```
x: 10
ref: 10
Dopo modifica: x = 20
Dopo modifica di x: ref = 30
```

## Reference costanti

Se si vuole che la reference non possa modificare il valore originale, si può usare una **reference costante**:

```cpp
const int &refCost = x;
```

In questo caso, `refCost` può leggere il valore di `x` ma non modificarlo.
