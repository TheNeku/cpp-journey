# Lezione 08 – Le stringhe in C++

**Testo, concatenazione, input, caratteri speciali e manipolazione base**

Una stringa è una sequenza di caratteri. In C++ puoi gestirla in due modi:

* **`std::string`** (consigliato): dinamica, sicura e comoda; richiede `#include <string>`.
* **C-style string**: array di `char` terminati da `'\0'`; richiedono attenzione a memoria e dimensioni.

Di seguito vediamo come creare, concatenare, convertire numeri in testo, misurare la lunghezza, accedere ai caratteri, usare caratteri speciali, leggere stringhe dall’utente e fare manipolazioni di base (trova, estrai, inserisci, cancella, sostituisci, aggiungi). In chiusura, un cenno a come evitare di scrivere `std::` ogni volta.


```cpp
std::string saluto = "Hello World";
```

`std::string` rappresenta testo dinamico: cresce o si riduce automaticamente quando modifichi il contenuto.

## Concatenazione

```cpp
std::string nome = "Mario";
std::string cognome = "Rossi";
std::string completo = nome + " " + cognome; // oppure nome += " " + cognome;
```


## Numeri e Stringhe

```cpp
int eta = 30;
std::string info = "Eta: " + std::to_string(eta);
```

Non puoi “sommarli” direttamente: prima converti il numero con `std::to_string`.


## Lunghezza delle Stringhe

```cpp
std::string parola = "Programma";
auto n = parola.size(); // == parola.length()
```

`size()` restituisce il numero di **char** (byte). Con UTF-8, un “carattere visivo” può occupare più byte.


## Accedere ad una Stringa

```cpp
std::string s = "C++";
char c0 = s[0];        // nessun controllo limiti
char c1 = s.at(1);     // lancia eccezione se fuori range
s[1] = '-';            // modifica
```

## Caratteri Speciali

Dentro i letterali:

* `\n` nuova riga
* `\t` tab
* `\"` virgolette
* `\\` backslash

```cpp
std::string fx = "Linea 1\nLinea 2\t(tab) \"virgolette\"";
```

## User Input

```cpp
std::string riga;
std::getline(std::cin, riga); // legge tutta la linea, spazi compresi
```

Se prima hai usato `std::cin >>`, ripulisci il buffer con `std::cin.ignore(...)` (vedi Lezione 05).


## Omettere il Namespace (breve nota)

Puoi evitare `std::` con:

```cpp
using std::string;
using std::cout;
```

Evita `using namespace std;` nei file globali: può causare conflitti (vedi Lezione 01.05).

## C-Style Strings

```cpp
char cstr[32] = "Mario";   // termina con '\0'
std::strcat(cstr, " Rossi"); // attenzione alla capienza del buffer!
```

Richiedono `#include <cstring>` e **massima attenzione** a overflow e terminatore.


## Manipolazione base (`std::string`)

Operazioni comuni:

* **Trova**: `s.find("chiave")`, `s.rfind('x')`
* **Sottostringa**: `s.substr(pos, len)`
* **Inserisci**: `s.insert(pos, "testo")`
* **Cancella**: `s.erase(pos, len)`
* **Sostituisci**: `s.replace(pos, len, "nuovo")`
* **Aggiungi**: `s.append("…")` o `+=`

---

```cpp
#include <iostream>
#include <string>
#include <cstring>

int main() {
    // Creazione e concatenazione
    std::string nome = "Mario";
    std::string cognome = "Rossi";
    std::string completo = nome + " " + cognome;

    // Numeri -> stringhe
    int eta = 30;
    std::string info = "Eta: " + std::to_string(eta);

    // Output base
    std::cout << completo << '\n';
    std::cout << info << '\n';

    // Caratteri speciali
    std::string frase = "Ciao \"C++\"!\nNuova riga.\tTab.";
    std::cout << frase << '\n';

    // Lunghezza e accesso caratteri
    std::cout << "Lunghezza nome: " << nome.size() << '\n';
    char primo = nome[0];
    char ultimo = nome.at(nome.size() - 1);
    std::cout << "Primo: " << primo << ", Ultimo: " << ultimo << '\n';

    // Input utente con spazi
    std::string input;
    std::cout << "Scrivi una frase: ";
    std::getline(std::cin, input);

    // Manipolazione base
    std::string s = input;
    auto pos = s.find(' '); // posizione del primo spazio
    std::string primaParola = (pos == std::string::npos) ? s : s.substr(0, pos);
    s.insert(0, "[INIZIO] ");
    if (s.size() >= 3) s.erase(3, 1); // rimuove un carattere alla posizione 3
    s.replace(0, 8, "[START]");       // sostituisce "[INIZIO]" -> "[START]"
    s.append(" [FINE]");

    std::cout << "Prima parola: " << primaParola << '\n';
    std::cout << "Manipolata: " << s << '\n';

    // C-style string
    char cstr[32] = "Mario";
    std::strcat(cstr, " Rossi");
    std::cout << "C-string: " << cstr << '\n';

    return 0;
}
```

**Riga 1 – `#include <iostream>`**  
Abilita l’I/O su console (`std::cout`, `std::cin`).

**Riga 2 – `#include <string>`**  
Rende disponibile `std::string` e le sue API.

**Riga 3 – `#include <cstring>`**  
Funzioni per C-string (`std::strcat`, ecc.).

**Riga 5 – `int main() {`**  
Inizio del programma.

**Riga 7 – `std::string nome = "Mario";`**  
Crea una stringa con un letterale.

**Riga 8 – `std::string cognome = "Rossi";`**  
Seconda stringa.

**Riga 9 – `std::string completo = nome + " " + cognome;`**  
Concatenazione con spazio in mezzo.

**Riga 12 – `int eta = 30;`**  
Numero intero da convertire.

**Riga 13 – `std::string info = "Eta: " + std::to_string(eta);`**  
Converte `eta` in testo e lo unisce.

**Riga 16 – `std::cout << completo << '\n';`**  
Stampa il nome completo.

**Riga 17 – `std::cout << info << '\n';`**  
Stampa la stringa con l’età.

**Riga 20 – `std::string frase = "Ciao \"C++\"!\nNuova riga.\tTab.";`**  
Usa `\"`, `\n`, `\t` per caratteri speciali.

**Riga 21 – `std::cout << frase << '\n';`**  
Mostra la stringa con escape.

**Riga 24 – `std::cout << "Lunghezza nome: " << nome.size() << '\n';`**  
Lunghezza in numero di `char` (byte).

**Riga 25 – `char primo = nome[0];`**  
Accesso senza controllo limiti.

**Riga 26 – `char ultimo = nome.at(nome.size() - 1);`**  
Accesso con controllo limiti.

**Riga 27 – `std::cout << "Primo: " ...`**  
Stampa i due caratteri.

**Riga 30 – `std::string input;`**  
Buffer per l’input utente.

**Riga 31 – `std::cout << "Scrivi una frase: ";`**  
Prompt.

**Riga 32 – `std::getline(std::cin, input);`**  
Legge l’intera riga, spazi inclusi.

**Riga 35 – `std::string s = input;`**  
Copia per manipolazione.

**Riga 36 – `auto pos = s.find(' ');`**  
Trova il primo spazio (o `npos` se assente).

**Riga 37 – `std::string primaParola = ...`**  
Estrae la prima parola con `substr`.

**Riga 38 – `s.insert(0, "[INIZIO] ");`**  
Inserisce testo in testa.

**Riga 39 – `if (s.size() >= 3) s.erase(3, 1);`**  
Cancella 1 carattere in posizione 3 (se disponibile).

**Riga 40 – `s.replace(0, 8, "[START]");`**  
Sostituisce 8 caratteri da posizione 0 con `[START]`.

**Riga 41 – `s.append(" [FINE]");`**  
Aggiunge testo alla fine.

**Riga 43 – `std::cout << "Prima parola: " << primaParola ...`**  
Mostra l’estratto.

**Riga 44 – `std::cout << "Manipolata: " << s ...`**  
Mostra la stringa dopo tutte le operazioni.

**Riga 47 – `char cstr[32] = "Mario";`**  
C-string con buffer capiente.

**Riga 48 – `std::strcat(cstr, " Rossi");`**  
Concatena in place: richiede spazio sufficiente.

**Riga 49 – `std::cout << "C-string: " << cstr ...`**  
Stampa la C-string.

**Riga 51 – `return 0;`**
Termina il programma.
