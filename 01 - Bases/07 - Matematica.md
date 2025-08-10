# Lezione 07 – Funzioni matematiche in C++

**Operatori aritmetici e funzioni di `<cmath>`**


Il C++ offre due strumenti principali per eseguire calcoli matematici:

1. **Operatori aritmetici**: per somme, sottrazioni, moltiplicazioni, divisioni, modulo, incremento e decremento.
2. **Funzioni matematiche**: fornite dalla libreria `<cmath>` (o `<math.h>`), utili per operazioni più complesse come radici, potenze, valori assoluti e funzioni trigonometriche.

## 1. Operatori aritmetici

| Operatore | Significato     | Esempio (`a=7`, `b=3`) | Risultato |
| --------- | --------------- | ---------------------- | --------- |
| `+`       | Addizione       | `a + b`                | 10        |
| `-`       | Sottrazione     | `a - b`                | 4         |
| `*`       | Moltiplicazione | `a * b`                | 21        |
| `/`       | Divisione       | `a / b`                | 2         |
| `%`       | Modulo (resto)  | `a % b`                | 1         |
| `++`      | Incremento      | `a++` / `++a`          | 8         |
| `--`      | Decremento      | `b--` / `--b`          | 2         |


## 2. Libreria `<cmath>`

Per usare le funzioni matematiche avanzate, includi l’header:

```cpp
#include <cmath>
```

Tutte le funzioni si trovano nel **namespace `std`**.

Funzioni più comuni:
| Funzione          | Descrizione             | Esempio       | Risultato |
| ----------------- | ----------------------- | ------------- | --------- |
| `std::sqrt(x)`    | Radice quadrata         | `sqrt(16)`    | 4         |
| `std::pow(a, b)`  | Potenza (`a^b`)         | `pow(2, 3)`   | 8         |
| `std::abs(x)`     | Valore assoluto         | `abs(-5)`     | 5         |
| `std::round(x)`   | Arrotonda al più vicino | `round(4.6)`  | 5         |
| `std::floor(x)`   | Arrotonda per difetto   | `floor(4.9)`  | 4         |
| `std::ceil(x)`    | Arrotonda per eccesso   | `ceil(4.1)`   | 5         |
| `std::fmax(a, b)` | Valore massimo          | `fmax(3, 7)`  | 7         |
| `std::fmin(a, b)` | Valore minimo           | `fmin(3, 7)`  | 3         |
| `std::sin(x)`     | Seno (radianti)         | `sin(3.14/2)` | ≈ 1       |
| `std::cos(x)`     | Coseno (radianti)       | `cos(0)`      | 1         |
| `std::tan(x)`     | Tangente (radianti)     | `tan(3.14/4)` | ≈ 1       |

---

```cpp
#include <iostream>
#include <cmath>

int main() {
    int a = 7, b = 3;

    // Operatori aritmetici
    std::cout << "a + b = " << a + b << '\n';
    std::cout << "a - b = " << a - b << '\n';
    std::cout << "a * b = " << a * b << '\n';
    std::cout << "a / b = " << a / b << '\n';
    std::cout << "a % b = " << a % b << '\n';

    // Funzioni matematiche
    std::cout << "sqrt(16) = " << std::sqrt(16) << '\n';
    std::cout << "pow(2, 5) = " << std::pow(2, 5) << '\n';
    std::cout << "abs(-10) = " << std::abs(-10) << '\n';
    std::cout << "round(4.6) = " << std::round(4.6) << '\n';
    std::cout << "floor(4.6) = " << std::floor(4.6) << '\n';
    std::cout << "ceil(4.1) = " << std::ceil(4.1) << '\n';
    std::cout << "fmax(3, 7) = " << std::fmax(3, 7) << '\n';
    std::cout << "fmin(3, 7) = " << std::fmin(3, 7) << '\n';

    // Trigonometriche (in radianti)
    std::cout << "sin(pi/2) = " << std::sin(3.14159265/2) << '\n';
    std::cout << "cos(0) = " << std::cos(0) << '\n';
    std::cout << "tan(pi/4) = " << std::tan(3.14159265/4) << '\n';

    return 0;
}
```

**Riga 1 – `#include <iostream>`**  
Per la stampa in console.

**Riga 2 – `#include <cmath>`**  
Per funzioni matematiche avanzate.

**Riga 5 – `int a = 7, b = 3;`**  
Dichiara due interi per esempi.

**Righe 8–12**  
Uso degli operatori aritmetici di base.

**Righe 15–22**  
Uso di funzioni di `<cmath>` per radice, potenza, valore assoluto, arrotondamenti e valori max/min.

**Righe 25–27**  
Uso delle funzioni trigonometriche `sin`, `cos`, `tan` con argomenti in radianti.
