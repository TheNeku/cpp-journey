# Lezione 05 – User Input in C++

**Leggere dati dalla console con `std::cin` e `std::getline`**

Finora abbiamo visto come **mostrare dati** all’utente usando `std::cout`.
Per rendere il programma interattivo, dobbiamo anche **leggere dati** inseriti dall’utente.
In C++ l’oggetto che si occupa di questo è **`std::cin`**, fornito dalla libreria `<iostream>`.

Il nome `cin` deriva da **“console input”** e rappresenta il **flusso di ingresso standard**: la tastiera.
Funziona insieme all’operatore di **estrazione** `>>`, che “prende” il valore dal flusso di input e lo inserisce nella variabile indicata.

Tuttavia, `std::cin >>` **si ferma al primo spazio**: se l’utente inserisce “Mario Rossi”, verrà letto solo “Mario”.
Per leggere intere righe (compresi spazi) si usa **`std::getline`**. Ad ogni modo lo approfondiremmo nella **Lezione 08** con le stringhe.

---

```cpp
#include <iostream>
#include <string>

int main() {
    int eta;
    std::string nome;
    std::string nomeCompleto;

    std::cout << "Inserisci il tuo nome (una parola): ";
    std::cin >> nome;

    std::cout << "Inserisci la tua eta: ";
    std::cin >> eta;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // pulisce il buffer

    std::cout << "Inserisci il tuo nome completo: ";
    std::getline(std::cin, nomeCompleto);

    std::cout << "\nRisultati:\n";
    std::cout << "Nome singolo: " << nome << '\n';
    std::cout << "Eta: " << eta << '\n';
    std::cout << "Nome completo: " << nomeCompleto << '\n';

    return 0;
}
```

**Riga 1 – `#include <iostream>`**  
Necessaria per input/output in console.

**Riga 2 – `#include <string>`**  
Necessaria per usare `std::string`.

**Riga 5 – `int eta;`**  
Variabile intera per l’età.

**Riga 6 – `std::string nome;`**  
Variabile per il nome singolo.

**Riga 7 – `std::string nomeCompleto;`**  
Variabile per il nome con spazi.

**Riga 9 – `std::cout << ...`**  
Chiede un nome senza spazi.

**Riga 10 – `std::cin >> nome;`**  
Legge la parola fino al primo spazio.

**Riga 12 – `std::cout << ...`**  
Chiede l’età.

**Riga 13 – `std::cin >> eta;`**  
Legge l’età.

**Riga 15 – `std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');`**  
Pulisce il buffer di input rimuovendo tutti i caratteri rimasti (incluso il `\n`).
Questo è importante perché, dopo `std::cin >>`, resta nel buffer il carattere di nuova riga premuto dall’utente: se non lo rimuoviamo, `std::getline` leggerà subito una riga vuota.
Per ora prendetela come nozione, ne capiremo l'essenza vera e propria più avanti.

**Riga 17 – `std::cout << ...`**  
Chiede il nome completo.

**Riga 18 – `std::getline(std::cin, nomeCompleto);`**  
Legge l’intera riga inserita dall’utente, spazi compresi.

**Righe 20-23 – `std::cout << ...`**  
Mostra i risultati.
