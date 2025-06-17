# C++ Syntax

Let's break down a simple C++ program to understand each part clearly.

## Example

```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```

## Example Explained

**Line 1: `#include <iostream>`**  
Includes the Input/Output Stream library, which allows the program to use input and output objects such as `cout`. Header files extend the capabilities of a C++ program.

**Line 2: `using namespace std;`**  
Allows direct access to elements from the standard library (like `cout` and `cin`) without needing to prefix them with `std::`.

> Don't worry if you don't fully understand how `#include <iostream>` and `using namespace std;` work. For now, treat them as standard lines that are usually present in most C++ programs.

**Line 3: Blank Line**  
C++ ignores whitespace, but we use blank lines to improve the readability of the code.

**Line 4: `int main()`**  
This is the main function. It's the starting point of every C++ program. Any code placed within its curly braces `{}` will be executed.

**Line 5: `cout << "Hello World!";`**  
`cout` (pronounced "see-out") is used with the insertion operator `<<` to display output on the screen. In this case, it prints the text "Hello World!".

> Note: C++ is case-sensitive. `cout` and `Cout` are different and will not be interpreted the same.  
> Note: Every C++ statement must end with a semicolon `;`.  
> Note: The body of `main()` could also be written in a single line, like this:

```cpp
int main() { cout << "Hello World!"; return 0; }
```

While valid, splitting the code across multiple lines improves readability.

**Line 6: `return 0;`**  
This line ends the `main` function and returns the value `0` to the operating system, signaling that the program executed successfully.

**Line 7: `}`**  
Closes the `main` function. Always ensure that every opening `{` has a matching closing `}`.

---

## Omitting the Namespace

Some programs may omit the `using namespace std;` line. In that case, you must prefix standard library names with `std::`, like this:

### Alternative Example

```cpp
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}
```

Both styles are correct. It’s up to you to decide which to use. Many professional developers prefer using `std::` explicitly to avoid potential naming conflicts.

---

## Quick Test – Check Your Understanding

**1. What is the purpose of `#include <iostream>`?**  
- A) To create variables  
- B) To perform input/output operations  
- C) To start the main function  

**2. What does `cout << "Hello World!";` do?**  
- A) Reads user input  
- B) Declares a function  
- C) Prints text to the screen  

**3. Why is `return 0;` used in the main function?**  
- A) To end the program with a success signal  
- B) To display a message  
- C) To define a variable  

**4. Is C++ case-sensitive?**  
- A) No  
- B) Yes  

**5. Which version is correct if you omit `using namespace std;`?**  
- A) `cout << "text";`  
- B) `std::cout << "text";`  

---

Check your answers and make sure you understand the reasoning behind each one before moving on to the next lesson.
