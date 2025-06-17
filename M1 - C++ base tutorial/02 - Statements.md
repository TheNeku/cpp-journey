# Lesson 02 - C++ Statements

A computer program is essentially a list of instructions to be executed by a computer.

In C++, these instructions are called **statements**. Every line that performs an action is considered a statement.

---

## Example

```cpp
cout << "Hello World!";
```

This line instructs the compiler to print the text `"Hello World!"` to the screen.

> Every statement **must** end with a semicolon (`;`).  
> Omitting the semicolon will result in a **compilation error**.

---

## What Happens if You Forget the Semicolon?

Let's look at a version with the semicolon missing:

```cpp
cout << "Hello World!"
```

This will produce an error such as:

```
error: expected ';' before 'return'
```

This tells us that the compiler expected the end of the statement (`;`), but didn’t find it.

---

## Multiple Statements

Most C++ programs contain **multiple statements**, each executed **in order**, from top to bottom:

### Example

```cpp
cout << "Hello World!";
cout << "Have a good day!";
return 0;
```

---

## Example Explained

From the example above, there are **three distinct statements**:

1. `cout << "Hello World!";` — prints the first message
2. `cout << "Have a good day!";` — prints the second message
3. `return 0;` — signals that the program ended successfully

Each statement is executed **one after the other**, exactly as written.

---

## Key Takeaways

- A **statement** is an instruction the program will execute.
- **Every statement must end with a `;` (semicolon)**.
- C++ executes statements **sequentially**, unless told otherwise (we'll learn how to control that later).
- Improperly terminated statements cause **compile-time errors**.

---

## Quick Test – Check Your Understanding

**1. What is a statement in C++?**  
- A) A comment  
- B) A variable  
- C) An instruction to be executed  

**2. What happens if you forget the semicolon at the end of a statement?**  
- A) Nothing  
- B) The program ignores the line  
- C) A compilation error occurs  

**3. How are multiple statements executed in a C++ program?**  
- A) In reverse order  
- B) Randomly  
- C) From top to bottom, one by one  

**4. Which of the following is a valid statement?**  
- A) `cout << "Hello";`  
- B) `cout << "Hello"`  
- C) `cout << Hello;`  

---

Review the answers and make sure you understand why they are correct before moving on.
