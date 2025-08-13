# Lezione 16 – `struct` in C++

**Raggruppare dati correlati**

Una **struct** (abbreviazione di *structure*) è un tipo di dato definito dall’utente che permette di **raggruppare più variabili di tipi diversi** sotto un unico nome.
È utile quando si vuole rappresentare un’entità complessa con più caratteristiche, ad esempio una persona, un punto nello spazio o un prodotto.

## Dichiarare una struct

**Sintassi:**

```cpp
struct NomeStruct {
    tipo1 nome1;
    tipo2 nome2;
    // ...
};
```

* **NomeStruct** → nome del nuovo tipo.
* All’interno si dichiarano le variabili (dette **membri** o **campi**).

```cpp
#include <iostream>

struct Persona {
    std::string nome;
    int eta;
    float altezza;
};

int main() {
    Persona p1;
    p1.nome = "Luca";
    p1.eta = 25;
    p1.altezza = 1.75f;

    std::cout << p1.nome << " ha " << p1.eta << " anni e misura " << p1.altezza << "m.\n";
    return 0;
}
```

**Riga 1 – `#include <iostream>`**  
Serve per stampare testo in console.

**Riga 3-7 – `struct Persona { ... };`**  
Definisce il nuovo tipo `Persona` con tre membri: una stringa `nome`, un intero `eta` e un numero con virgola `altezza`.

**Riga 9 – `Persona p1;`**  
Crea una variabile `p1` di tipo `Persona`.

**Righe 10-12**  
Assegnano valori ai membri della struct usando la **notazione punto** (`variabile.membro`).

**Riga 14 – `std::cout << ...`**  
Stampa i valori memorizzati nella struct.

## Inizializzazione diretta

È possibile assegnare i valori subito alla creazione:

```cpp
Persona p2 = {"Anna", 30, 1.68f};
```

## Struct e array

Le struct possono essere usate in array:

```cpp
Persona gruppo[2] = {
    {"Marco", 22, 1.80f},
    {"Sara", 19, 1.65f}
};

for (int i = 0; i < 2; i++) {
    std::cout << gruppo[i].nome << '\n';
}
```

## Struct nidificate

Una struct può contenere altre struct:

```cpp
struct Indirizzo {
    std::string citta;
    std::string via;
};

struct Persona {
    std::string nome;
    Indirizzo indirizzo;
};
```

## Differenze con `class`

* In una `struct` i membri sono **pubblici** di default.
* In una `class` i membri sono **privati** di default.
* Per il resto, in C++ moderno `struct` e `class` sono molto simili.
