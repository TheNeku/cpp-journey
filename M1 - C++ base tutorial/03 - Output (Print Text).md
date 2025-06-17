# Lesson 03 - C++ Output (Print Text)

This lesson covers how to print output in C++ using `cout`, including how to display text, numbers, and how to format output using new lines.

---

##1 – Printing Text

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

### Quick Test – Check Your Understanding

**1. What does **``** do in a C++ program?**

- A) Accepts input from the user
- B) Displays text or values to the screen
- C) Declares a variable

**2. What symbol is used to send data into **``**?**

- A) `>>`
- B) `--`
- C) `<<`

**3. What happens if you use two **``** statements without a newline?**

- A) The second one replaces the first
- B) They are printed on the same line
- C) An error occurs

**4. Which of the following will produce a compile error?**

- A) `cout << "Hello";`
- B) `cout << Hello;`
- C) `cout << "123";`

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

### Quick Test – Check Your Understanding

**1. How do you print the number 7 to the screen?**

- A) `cout << "7";`
- B) `cout << 7;`
- C) `cout 7;`

**2. What will **``** output?**

- A) `4 + 2`
- B) `6`
- C) An error

**3. What happens if you write **``** instead of **``**?**

- A) It prints `6`
- B) It prints `3 + 3`
- C) It causes an error

**4. Which of these will print **``**?**

- A) `cout << 5 + 10;`
- B) `cout << "15";`
- C) Both A and B

---

##3 – New Lines

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

### Quick Test – Check Your Understanding

**1. What does **``** do in a C++ string?**

- A) It inserts a tab
- B) It inserts a newline
- C) It adds a space

**2. Which of the following will create a blank line?**

- A) `cout << "\n\n";`
- B) `cout << "Hello";`
- C) `cout << endl;`

**3. What is the difference between **``** and **``**?**

- A) `endl` flushes the buffer, `\n` does not
- B) They behave the same in every way
- C) `\n` adds a space

**4. Which output is correct for this code?**

```cpp
cout << "Line 1\n";
cout << "Line 2";
```

- A) Line 1Line 2
- B) Line 1\
  Line 2
- C) Line 2\
  Line 1

---

Practice these examples in your code editor to fully understand how C++ handles output formatting.

