# Lezione 04 – Le variabili in C++

**Contenitori per i dati: tipi, dichiarazione, uso**

## Ma cosa sono le variabili?

Possiamo immaginare una **variabile** come una "scatola" che contiene un valore. Ogni variabile ha:  

* Un **tipo** (che specifica che tipo di dato può contenere)  
* Un **nome**  
* Un **valore** (opzionale al momento della dichiarazione, poichè può essere specificato in seguito)


In C++ esistono diversi tipi di variabili (definiti con parole chiave diverse), ad esempio:

* `int` – memorizza numeri interi (senza decimali), come 123 o -123
* `double` – memorizza numeri in virgola mobile, con decimali, come 19.99 o -19.99
* `char` – memorizza singoli caratteri, come 'a' o 'B'. I valori `char` sono racchiusi tra apici singoli
* `string` – memorizza testo, come "Hello World". I valori `string` sono racchiusi tra doppi apici
* `bool` – memorizza valori con due stati: `true` (vero) o `false` (falso)

---

## Spiegazione

```cpp
#include <iostream>
using namespace std;

int main() {
  int myNum = 15;
  cout << myNum;
  return 0;
}
```

**`int myNum = 15;`**
Dichiara una variabile intera (`int`) chiamata `myNum` e le assegna il valore intero di `15`.

**`cout << myNum;`**
Stampa il valore contenuto nella variabile `myNum`.


## Sintassi generale

```cpp
tipo nomeVariabile = valore;
```


```cpp
int eta = 18;
double prezzo = 12.99;
char lettera = 'A';
string nome = "Marco";
bool isOnline = true;
```

## Dichiarare senza assegnare

Come già anticipato si può anche **dichiarare** una variabile senza darle subito un valore:

```cpp
int eta;
eta = 20;
```


## Modificare il valore di una variabile

Il valore può essere **cambiato** durante l’esecuzione del programma:

```cpp
int x = 10;
x = 5;
cout << x; // Stampa 5
```


## Sommare variabili

```cpp
int x = 5, y = 10;
int somma = x + y;
cout << somma;  // Stampa 15
```


## Dichiarare più variabili insieme

```cpp
int a = 1, b = 2, c = 3;
cout << a + b + c;  // Stampa 6
```


## Un valore per più variabili

```cpp
int x, y, z;
x = y = z = 50;
cout << x + y + z;  // Stampa 150
```

## Identificatori: nomi delle variabili

I **nomi delle variabili** sono detti **identificatori**. Devono seguire alcune regole:

* Possono contenere **lettere, numeri e underscore** (`_`)
* Devono iniziare con una **lettera o un underscore**
* Sono **case-sensitive** (`nome` ≠ `Nome`)
* **Non possono contenere spazi o caratteri speciali**
* **Non possono avere nomi di parole chiave riservate** (`int`, `return`, ecc.)

> È buona norma usare **nomi descrittivi**:

```cpp
int m = 60;              // Risulta poco chiaro
int minutiPerOra = 60;   
```


## Variabili costanti (`const`)
Quando non vuoi che altri (o tu stesso) modifichino il valore di una variabile esistente, usa la parola chiave `const` (questo dichiarerà la variabile come "costante", il che significa che non può essere modificata ed è di sola lettura):

```cpp
const int giorniSettimana = 7;
giorniSettimana = 5;  // Errore!
```

Una variabile `const` **deve essere inizializzata** subito.



## Prossima lezione

Nella prossima lezione scopriremo gli **User Input**.
