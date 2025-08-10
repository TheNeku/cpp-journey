# Lezione 03 – I commenti in C++

I commenti sono parti di testo nel codice che **il compilatore ignora completamente**. Servono per spiegare cosa fa il programma, annotare idee o disattivare temporaneamente del codice senza eliminarlo. Non influiscono in alcun modo sull’esecuzione, ma sono fondamentali per mantenere il codice leggibile e comprensibile, sia per te sia per chi lo leggerà in futuro.

---

```cpp
#include <iostream>

int main() {
    // Questo è un commento su una sola riga
    std::cout << "Esempio di commenti" << '\n';

    /*
       Questo è un commento
       su più righe.
       Può coprire più righe di testo.
    */
    std::cout << "Fine programma" << '\n';

    return 0; // Questo commento è a fianco di un'istruzione
}
`
``
**Riga 4 - `// ...`**
* Crea un **commento su una sola riga**: tutto ciò che segue `//` fino alla fine della riga viene ignorato dal compilatore.
* Utile per brevi note, spiegazioni veloci o commenti in linea a destra di un’istruzione.

**`Riga 6-10 - /* ... */`**
* Crea un **commento su più righe**: tutto ciò che si trova tra `/*` e `*/` viene ignorato dal compilatore, anche se va a capo.
* Adatto per spiegazioni più lunghe, blocchi di testo o per "commentare" temporaneamente più righe di codice.

**Riga 13 - `// ...` alla fine di un’istruzione**
* Puoi mettere un commento dopo una riga di codice: il compilatore esegue l’istruzione e ignora tutto ciò che segue `//` sulla stessa riga.
* Buono per aggiungere note o chiarimenti rapidi sul significato di una singola riga.

Se vuoi, per la **Lezione 4** possiamo passare a **variabili** e tipi di dato, così continuiamo in ordine logico dopo sintassi, output e commenti.
