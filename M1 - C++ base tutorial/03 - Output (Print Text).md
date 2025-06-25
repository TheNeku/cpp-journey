# Lesson 03 - C++ Output (Print Text)

This lesson covers how to print output in C++ using `cout`, including how to display text, numbers, and how to format output using new lines.

---

## 1 – Printing Text

The `cout` object, together with the `<<` operator, is used to display text in C++.

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```

### Key Notes

- `cout` stands for console output.
- Text must be surrounded by double quotes `""`.
- Each output statement must end with a semicolon `;`.
- Multiple `cout` statements can be used, but they will print on the same line unless newlines are added.

### Example with Multiple Outputs

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  cout << "I am learning C++";
  return 0;
}
```

### Output

```
Hello World!I am learning C++
```

---

## 2 – Printing Numbers

`cout` can also be used to print numbers directly. Unlike strings, numbers are **not** enclosed in quotes.

### Example

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << 3;
  return 0;
}
```

### Output

```
3
```

### Performing Calculations

You can also embed math expressions inside `cout`:

```cpp
cout << 3 + 3;   // prints 6
cout << 2 * 5;   // prints 10
```

---

## 3 – New Lines

By default, C++ prints all output on the same line. To move to a new line, you can use either `\n` or the `endl` manipulator.

### Method 1: Using `\n`

```cpp
cout << "Hello World!\n";
cout << "I am learning C++";
```

### Method 2: Using `<< "\n"`

```cpp
cout << "Hello World!" << "\n";
cout << "I am learning C++";
```

### Multiple Newlines

```cpp
cout << "Hello World!" << "\n\n";
cout << "I am learning C++";
```

This prints a blank line between outputs.

### Method 3: Using `endl`

```cpp
cout << "Hello World!" << endl;
cout << "I am learning C++";
```

`endl` also flushes the output buffer (useful in real-time logging or debugging).

---
