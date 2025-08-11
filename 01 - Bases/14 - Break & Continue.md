# Lezione 14 – `break` e `continue` in C++

**Controllo del flusso nei cicli**

Durante l’esecuzione di un ciclo (`for`, `while`, `do...while`) o di un `switch`, può essere necessario **interrompere** il ciclo prima che la condizione diventi falsa, oppure **saltare** parte del codice e passare direttamente all’iterazione successiva.
In C++ queste operazioni si realizzano con le istruzioni **`break`** e **`continue`**.

## 1. `break` – Interrompere il ciclo

`break` termina immediatamente il ciclo (o il `switch`) in cui si trova, ignorando eventuale codice rimanente nel blocco.

**Sintassi:**

```cpp
break;
```

```cpp
#include <iostream>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Interrompe il ciclo quando i vale 5
        }
        std::cout << i << '\n';
    }
    return 0;
}
```

**Output:**

```
0
1
2
3
4
```

Il ciclo si ferma appena `i` diventa 5.

## 2. `continue` – Saltare all’iterazione successiva

`continue` interrompe **solo l’iterazione corrente** e passa subito alla successiva, saltando il codice rimanente del blocco.

**Sintassi:**

```cpp
continue;
```

```cpp
#include <iostream>

int main() {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            continue; // Salta i numeri pari
        }
        std::cout << i << '\n';
    }
    return 0;
}
```

**Output:**

```
1
3
5
7
9
```

I numeri pari vengono ignorati.

### Differenze tra `break` e `continue`

| Istruzione | Effetto                                                                     |
| ---------- | --------------------------------------------------------------------------- |
| `break`    | Termina completamente il ciclo o il blocco `switch`.                        |
| `continue` | Salta il resto del codice nell’iterazione corrente e passa alla successiva. |

Se vuoi, per la **Lezione 15** possiamo iniziare con **gli array** in C++, così passiamo a memorizzare più valori in un’unica variabile. Vuoi che proceda?
