# Lezione 11 – Switch Case in C++

**Selezione multipla di codice**

Il costrutto `switch` permette di scegliere tra più percorsi di esecuzione in base al **valore di una variabile o di un’espressione**.
È particolarmente utile quando bisogna confrontare **lo stesso valore** con più possibili opzioni, evitando una lunga catena di `if...else if`.


```cpp
switch (variabile) {
    case valore1:
        // Codice eseguito se variabile == valore1
        break;
    case valore2:
        // Codice eseguito se variabile == valore2
        break;
    ...
    default:
        // Codice eseguito se nessun caso corrisponde
}
```

* `switch` valuta una sola volta la variabile o l’espressione tra parentesi tonde.
* Ogni `case` è un possibile valore da confrontare.
* `break` interrompe l’esecuzione dello `switch` per evitare di eseguire anche i casi successivi.
* `default` è opzionale e viene eseguito se nessun caso corrisponde.

## Regole e limiti

* La variabile o espressione nello `switch` deve essere di **tipo integrale** (`int`, `char`, `enum`, ecc.) o `enum class`. Non sono ammessi `float`, `double` o `string` (a meno di usare conversioni o soluzioni alternative).
* I valori nei `case` devono essere **costanti note a compile-time**.
* Senza `break`, l’esecuzione **prosegue nei case successivi** (fallthrough).

---

```cpp
#include <iostream>

int main() {
    int giorno = 3;

    switch (giorno) {
        case 1:
            std::cout << "Lunedi\n";
            break;
        case 2:
            std::cout << "Martedi\n";
            break;
        case 3:
            std::cout << "Mercoledi\n";
            break;
        case 4:
            std::cout << "Giovedi\n";
            break;
        case 5:
            std::cout << "Venerdi\n";
            break;
        case 6:
            std::cout << "Sabato\n";
            break;
        case 7:
            std::cout << "Domenica\n";
            break;
        default:
            std::cout << "Valore non valido\n";
    }

    return 0;
}
```

**Riga 1 – `#include <iostream>`**  
Per stampare testo in console.

**Riga 4 – `int giorno = 3;`**  
Variabile intera che rappresenta il giorno della settimana.

**Riga 6 – `switch (giorno) {`**  
Inizio del costrutto `switch`, che valuterà il valore di `giorno`.

**Righe 7–27 – `case ...:`**  
Ogni `case` gestisce un valore specifico di `giorno`.
Se il valore corrisponde, esegue il blocco fino al `break`.

**Riga 28 – `default:`**  
Caso di fallback, eseguito se `giorno` non corrisponde a nessun `case`.

## Fallthrough (Esecuzione consecutiva)

Se non si mette `break`, il programma continua nei `case` successivi:

```cpp
int voto = 10;
switch (voto) {
    case 10:
    case 9:
        std::cout << "Ottimo\n";
        break;
    case 8:
        std::cout << "Buono\n";
        break;
}
```

Qui `voto = 10` esegue anche il caso `9` perché non c’è `break` tra i due.
