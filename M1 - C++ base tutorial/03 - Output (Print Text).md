# Lesson 03 - C++ Output (Print Text)

In C++, the `cout` object is used in combination with the `<<` operator to print text or values to the console.

This is a fundamental part of almost every C++ program — displaying information to the user.

---

## Example

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```

---

## How It Works

- `cout` stands for **console output**.
- `<<` is the **insertion operator**, which sends the output to the console.
- Text to be printed must be **enclosed in double quotes (`"`)**.

> This line will output:  
> `Hello World!`

---

## Multiple `cout` Statements

You can use multiple `cout` statements in a row. However, they will print text **on the same line**, unless you explicitly insert a newline (which will be covered in a future lesson).

### Example

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

As you can see, both messages are printed on the **same line**, immediately next to each other.

---

## Key Takeaways

- Use `cout << "text";` to display output.
- Always use **double quotes** around the text.
- `cout` does **not** automatically move to a new line.
- You can chain or repeat `cout` statements as needed.

> Tip: You will learn how to print on **multiple lines** using `\n` or `endl` in lesson 5.

---

## Quick Test – Check Your Understanding

**1. What does `cout` do in a C++ program?**  
- A) Accepts input from the user  
- B) Displays text or values to the screen  
- C) Declares a variable  

**2. What symbol is used to send data into `cout`?**  
- A) `>>`  
- B) `--`  
- C) `<<`  

**3. What happens if you use two `cout` statements without a newline?**  
- A) The second one replaces the first  
- B) They are printed on the same line  
- C) An error occurs  

**4. Which of the following will produce a compile error?**  
- A) `cout << "Hello";`  
- B) `cout << Hello;`  
- C) `cout << "123";`  

---

Review your answers and test them in code to reinforce your understanding.
