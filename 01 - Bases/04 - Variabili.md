# Lezione 04 – Le variabili in C++

**Contenitori per i dati: tipi, dichiarazione, uso**

Una variabile è uno **spazio di memoria** a cui diamo un nome e in cui possiamo memorizzare un valore.
Pensa a una variabile come a una “scatola etichettata” che può contenere dati: possiamo aprirla per leggere il valore o sostituirlo con uno nuovo.

Le variabili in C++ hanno tre caratteristiche fondamentali:

1. **Tipo** – definisce la natura del dato (numero intero, numero con virgola, carattere, testo, ecc.).
2. **Nome** – l’etichetta che useremo per riferirci alla variabile nel codice.
3. **Valore** – il dato effettivamente memorizzato.

Quando dichiari una variabile, il compilatore riserva una porzione di memoria sufficiente per contenere quel tipo di dato. Ogni tipo ha una dimensione (in byte) e un intervallo di valori che può rappresentare.

### Tipi di variabili comuni

* **`int`**
  Tipo intero. Occupa in genere **4 byte** (32 bit) e può rappresentare valori approssimativamente da **-2.147.483.648 a 2.147.483.647** (dipende dal compilatore e dall’architettura).
  Usato per contatori, indici, operazioni matematiche intere.

* **`float`**
  Numero in virgola mobile a precisione singola. Occupa **4 byte** e può rappresentare valori molto grandi o molto piccoli, ma con una precisione di circa **6-7 cifre decimali**.
  Usato per calcoli scientifici, grafica, giochi, dove serve la virgola ma non troppa precisione.

* **`double`**
  Numero in virgola mobile a doppia precisione. Occupa **8 byte** e ha precisione di circa **15-16 cifre decimali**.
  Usato quando serve maggiore precisione rispetto a `float`.

* **`char`**
  Un singolo carattere (lettera, numero, simbolo). Occupa **1 byte** e memorizza il **codice numerico** del carattere (secondo la codifica ASCII o Unicode).
  Usato per testi e singoli simboli.

* **`bool`**
  Tipo logico, rappresenta solo due valori: `true` o `false`. In memoria occupa in genere **1 byte** (anche se teoricamente basterebbe 1 bit, ma per efficienza viene allineato a 1 byte).

* **`std::string`**
  Sequenza dinamica di caratteri (testo). Ogni carattere occupa **1 byte** (in ASCII); la dimensione totale varia in base alla lunghezza del testo e a un piccolo overhead di gestione interna. Richiede l’header `<string>`.

### Dichiarare e assegnare variabili

Puoi **dichiarare** una variabile e **assegnarle** un valore subito (inizializzazione) o in un momento successivo:

```cpp
int numero;     // dichiarazione
numero = 10;    // assegnazione
int eta = 20;   // dichiarazione + inizializzazione
```

### Dichiarare più variabili

È possibile dichiarare più variabili dello stesso tipo in una sola riga, con o senza valori iniziali:

```cpp
int a, b, c;          // senza valori iniziali
int x = 1, y = 2, z;  // con alcuni valori iniziali
```

### Identificatori

Il **nome** di una variabile è chiamato **identificatore**.
Le regole principali sono:

* Può contenere lettere, numeri e `_` (underscore).
* Non può iniziare con un numero.
* È case sensitive (`Eta` e `eta` sono due variabili diverse).
* Non può essere una parola chiave del C++ (es. `int`, `for`, `return`).  
  
È buona pratica usare nomi descrittivi (`temperaturaAttuale` anziché `t1`).

### Costanti

Una costante è come una variabile, ma il suo valore **non può cambiare** dopo l’inizializzazione. Si dichiara con la parola chiave `const`:

```cpp
const double PI = 3.14159;
```

Se provi a modificare `PI`, il compilatore darà errore.

---

```cpp
#include <iostream>
#include <string>

int main() {
    int eta = 20;             // variabile intera
    float temperatura = 36.5; // variabile in virgola mobile
    double pi = 3.1415926535; // maggiore precisione
    char iniziale = 'A';      // singolo carattere
    bool acceso = true;       // valore logico
    std::string nome = "Neku"; // stringa di testo

    int a, b = 5, c;          // più variabili dello stesso tipo
    const double GRAVITA = 9.81; // costante

    std::cout << "Eta: " << eta << '\n';
    std::cout << "Temperatura: " << temperatura << '\n';
    std::cout << "Pi greco: " << pi << '\n';
    std::cout << "Iniziale: " << iniziale << '\n';
    std::cout << "Acceso: " << acceso << '\n';
    std::cout << "Nome: " << nome << '\n';
    std::cout << "b: " << b << '\n';
    std::cout << "Gravita: " << GRAVITA << '\n';

    return 0;
}
```

**Riga 1 – `#include <iostream>`**  
Libreria per input/output in console (`std::cout`, `std::cin`).

**Riga 2 – `#include <string>`**  
Libreria per il tipo `std::string`.

**Riga 5 – `int eta = 20;`**  
Variabile intera, 4 byte.

**Riga 6 – `float temperatura = 36.5;`**  
Variabile `float`, 4 byte.

**Riga 7 – `double pi = 3.1415926535;`**  
Variabile `double`, 8 byte.

**Riga 8 – `char iniziale = 'A';`**  
Variabile `char`, 1 byte.

**Riga 9 – `bool acceso = true;`**  
Variabile logica, 1 byte.

**Riga 10 – `std::string nome = "Neku";`**  
Stringa di testo dinamica.

**Riga 12 – `int a, b = 5, c;`**  
Dichiarazione di più variabili in una sola riga.

**Riga 13 – `const double GRAVITA = 9.81;`**  
Costante a doppia precisione, non modificabile.

**Righe 15-21**  
Output dei valori usando `std::cout`.
