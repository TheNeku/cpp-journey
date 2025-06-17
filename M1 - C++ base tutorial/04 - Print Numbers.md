# Lesson 04 - C++ Print Numbers

In addition to printing text, you can also use `cout` to print **numbers** in C++.

---

## Printing a Number

Unlike text, numbers are **not enclosed in double quotes**.

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

Here, the number `3` is printed directly to the screen.

---

## Printing Calculations

You can also perform arithmetic operations directly inside the `cout` statement.

### Example – Addition

```cpp
cout << 3 + 3;
```

### Output

```
6
```

### Example – Multiplication

```cpp
cout << 2 * 5;
```

### Output

```
10
```

This allows you to perform quick calculations and display the result instantly.

---

## Key Takeaways

- `cout` can print both **text** and **numbers**.
- **Do not use quotes** when printing raw numbers.
- You can include **mathematical expressions** inside `cout`.

---

## Quick Test – Check Your Understanding

**1. How do you print the number 7 to the screen?**  
- A) `cout << "7";`  
- B) `cout << 7;`  
- C) `cout 7;`  

**2. What will `cout << 4 + 2;` output?**  
- A) `4 + 2`  
- B) `6`  
- C) An error  

**3. What happens if you write `cout << "3 + 3";` instead of `cout << 3 + 3;`?**  
- A) It prints `6`  
- B) It prints `3 + 3`  
- C) It causes an error  

**4. Which of these will print `15`?**  
- A) `cout << 5 + 10;`  
- B) `cout << "15";`  
- C) Both A and B  

---

Try each example in your code editor and observe the output to reinforce your understanding.
