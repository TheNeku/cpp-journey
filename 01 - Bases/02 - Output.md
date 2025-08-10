# Lezione 02 – L’output in C++

**Stampare testo su console**  

Questa lezione spiega come inviare testo e valori alla console usando `std::cout`. Ci concentriamo su cosa sono i *flussi* (stream) dell’I/O standard, cosa fornisce l’header `<iostream>`, come funziona `cout`, l’operatore `<<`, la concatenazione, il buffering e la differenza tra `'\n'` e `std::endl`.

---

```cpp
#include <iostream>

int main() {
    std::cout << "Uno" << ' ' << 2 << '\n';
    std::cout << "Più righe\n";
    std::cout << "Flush immediato" << std::endl;
    return 0;
}
```

**Riga 1 - `#include <iostream>`**  
`<iostream>` è l’header della libreria standard che definisce i *flussi* di input/output orientati ai caratteri. In particolare:  
* dichiara i tipi base dei flussi (`std::istream`, `std::ostream`, `std::iostream`),  
* mette a disposizione gli *oggetti globali* collegati ai canali standard del processo: `std::cin` (input), `std::cout` (output normale), `std::cerr` (errori, non bufferizzato o meno bufferizzato), `std::clog` (log, in genere bufferizzato). Se non è chiaro non preoccuparti, per ora tienilo solo come nozione,  
* include le definizioni degli operatori di estrazione/inserimento (`>>` e `<<`) per i tipi fondamentali.
È un’**header**: non esegue nulla da solo, ma rende disponibili dichiarazioni e definizioni necessarie al compilatore.  

**Riga 2 - `int main() { ... }`**  
Punto di ingresso del programma. Qui dentro scriviamo le istruzioni di output che vogliamo eseguire.

**Riga 3 - `std::cout << "Uno" << ' ' << 2 << '\n';`**  
* **`std::cout`** è l’oggetto globale di tipo `std::ostream` (più precisamente `std::basic_ostream<char>`) collegato allo *standard output* del processo (la console).  
* **`<<`** è l’operatore di **inserimento nel flusso**: prende il valore a destra e lo “invia” nel flusso di output. È **sovraccaricato** per molti tipi (stringhe, caratteri, interi, floating point, ecc.).  
* **Concatenazione**: l’operatore `<<` restituisce una **riferimento al flusso** (`std::ostream&`), perciò si possono concatenare più inserimenti in una sola istruzione.  
* **Tipi diversi, stessa istruzione**: `"Uno"` è una **stringa letterale**, `' '` è un **carattere singolo**, `2` è un **intero**: ognuno ha il suo overload di `<<`.  
* **`'\n'`** inserisce un carattere di **nuova riga**. Non forza il **flush** del buffer (vedi sotto).  

**Riga 4 - `std::cout << "Più righe\n";`**  
Stessa logica: stampiamo una stringa e aggiungiamo una nuova riga con `'\n'`.  

**Riga 5 - `std::cout << "Flush immediato" << std::endl;`**  
* **`std::endl`** inserisce una **nuova riga** *e* **forza il flush** del buffer di `cout`.
* **Buffering**: `cout` è in genere **bufferizzato** per efficienza. Il testo può essere accumulato in memoria e scritto a blocchi. Il flush svuota il buffer verso il terminale. Il flush avviene automaticamente in vari momenti (ad es. alla fine del programma, quando il buffer è pieno, o prima di leggere da `std::cin` perché per default `cin` è *tied* a `cout`), ma `std::endl` lo impone subito.
* **Prestazioni**: preferisci `'\n'` per andare a capo quando non ti serve il flush immediato; usa `std::endl` solo quando *vuoi davvero* forzare il flush.
In caso non sappaite cosa sia il buffering o cosa sia il flush ora cercherò di spiegarvelo nel modo più semplice possibile:  

#### Buffering  
È il processo con cui i dati destinati all’input o all’output vengono temporaneamente accumulati in un’area di memoria chiamata buffer. Questo riduce il numero di operazioni dirette su dispositivi lenti (come la console o un file), migliorando le prestazioni. Nel caso di std::cout, il testo scritto non viene immediatamente mostrato, ma può rimanere nel buffer finché non viene svuotato.

#### Flush  
È l’operazione che svuota il buffer, cioè forza la scrittura immediata di tutti i dati accumulati verso la destinazione (schermo, file, rete, ecc.). Il flush può avvenire automaticamente (alla fine del programma, prima di leggere da std::cin, quando il buffer è pieno) oppure manualmente usando funzioni o manipolatori come std::endl o std::flush.


**Riga 6 - `return 0;`**  
Termina il programma indicando al sistema operativo che è andato tutto bene.
