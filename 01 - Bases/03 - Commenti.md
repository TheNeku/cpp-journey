# Lezione 03 – I commenti in C++

**Come scrivere note nel codice**

In questa lezione impariamo a scrivere **commenti**, cioè righe di testo che **non vengono eseguite dal programma**.

---

## A cosa servono i commenti?

I commenti sono utili per:

* Spiegare cosa fa una parte di codice in grandi progetti 
* Annotare idee, modifiche o bug
* Collaborare con altri programmatori
* Ignorare teporaneamente parte di codice

*P.S.: Il compilatore **ignora completamente** i commenti. Non influiscono in alcun modo sull'esecuzione del programma.*

---

## Commenti su una riga (`//`)

Il commento **su una riga sola** inizia con due barre oblique `//`.
Tutto quello che scrivi dopo `//` su quella riga verrà ignorato.


```cpp
// Questo è un commento
```


## Commenti su più righe (`/* ... */`)

I **commenti multilinea** iniziano con `/*` e terminano con `*/`.


```cpp
  /* Il codice qui sotto stampa
     il messaggio "Hello World!"
     sullo schermo. */
```


## ⚠️ Attenzione: i commenti **non si possono annidare**!

Questo è **sbagliato**:

```cpp
/*
  Primo commento
  /* Secondo commento dentro il primo */
*/
```

---

## Prossima lezione

Nella prossima lezione studieremo **le variabili**.
