# Lezione 01 – La sintassi del C++

**Struttura di un programma e istruzioni**

In questa lezione vediamo la struttura base di un programma in C++ e cosa sono gli statement (istruzioni). La sintassi è l’insieme di regole che definiscono come scrivere il codice in modo che il compilatore lo capisca. Ogni programma C++ parte da una struttura fondamentale e cresce aggiungendo istruzioni che dicono al computer cosa fare.

---


```cpp
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}
```


**Riga 1 – `#include <iostream>`**  
Questa direttiva dice al compilatore di includere la libreria iostream, che permette di usare funzioni per l’input e l’output, come `std::cout`. Non è un’istruzione C++ vera e propria, ma una direttiva preprocessore, cioè viene eseguita prima della compilazione.

**Riga 2 – Riga vuota**  
Spazi bianchi e righe vuote **non vengono considerati** dal compilatore.  
Sono usati per rendere il codice più leggibile, specialmente nei programmi più lunghi.  

**Riga 3 – `int main() {}`**  
Ogni programma C++ deve avere una funzione main(). È il punto di ingresso: il programma inizia a eseguire le istruzioni partendo da qui.
L’int indica che main() restituisce un valore intero al sistema operativo (tipicamente 0 se tutto è andato bene).
Le parentesi graffe racchiudono il blocco di codice che appartiene a main(). Tutte le istruzioni del programma saranno scritte all’interno.

**Riga 4 – `cout << "Hello World!";`**  
Questo è uno statement (istruzione) che invia testo in output al terminale.
`std::` è il **namespace standard**, ovvero lo spazio dei nomi in cui si trova l’oggetto cout. Se lo omettessimo, il compilatore non saprebbe dove cercare cout e restituirebbe un errore, a meno che non sia stato specificato in precedenza che si sta usando quel namespace, in questo caso lo standard. Ho intenzione di fare un intera lezione sulle possibili problematiche di usare lo `using namespace std` in codici più complessi. 
Detto ciò `cout` è l’oggetto che gestisce l’output verso la console.
L’operatore `<<` invia il testo tra virgolette alla console.
Ogni istruzione termina con un punto e virgola (;), che indica la fine del comando.


**Attenzione a queste 2 cose:**  
* Il C++ è **case-sensitive**: `cout` e `Cout` sono due cose diverse.  
* Non è necessario scrivere statements uno per riga, poichè **il compilatore ignora gli spazi e i ritorni a capo**, pertanto si può scrivere tutto in una riga sola.  

Il codice scritto prima può anche essere scritto in questa maniera:
```cpp
int main() { cout << "Hello World!"; return 0; }
```
